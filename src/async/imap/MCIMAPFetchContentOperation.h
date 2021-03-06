//
//  IMAPFetchContentOperation.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 1/12/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef __MAILCORE_IMAPFETCHCONTENTOPERATION_H_

#define __MAILCORE_IMAPFETCHCONTENTOPERATION_H_

#include <MailCore/MCIMAPOperation.h>

#ifdef __cplusplus

namespace mailcore {
    
    class IMAPFetchContentOperation : public IMAPOperation {
    public:
        IMAPFetchContentOperation();
        virtual ~IMAPFetchContentOperation();
        
        virtual void setUid(uint32_t uid);
        virtual uint32_t uid();
        
        virtual void setPartID(String * partID);
        virtual String * partID();
        
        virtual void setEncoding(Encoding encoding);
        virtual Encoding encoding();
        
        // Result.
        virtual Data * data();
        
    public: // subclass behavior
        virtual void main();
        
    private:
        uint32_t mUid;
        String * mPartID;
        Encoding mEncoding;
        Data * mData;
        
    };
    
}

#endif

#endif

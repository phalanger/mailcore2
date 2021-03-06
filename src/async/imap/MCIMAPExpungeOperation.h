//
//  MCIMAPExpungeOperation.h
//  mailcore2
//
//  Created by DINH Viêt Hoà on 1/12/13.
//  Copyright (c) 2013 MailCore. All rights reserved.
//

#ifndef __MAILCORE_MCIMAPEXPUNGEOPERATION_H_

#define __MAILCORE_MCIMAPEXPUNGEOPERATION_H_

#include <MailCore/MCIMAPOperation.h>

#ifdef __cplusplus

namespace mailcore {
    
    class IMAPExpungeOperation : public IMAPOperation {
    public:
        IMAPExpungeOperation();
        virtual ~IMAPExpungeOperation();
        
    public: // subclass behavior
        virtual void main();
    };
    
}

#endif

#endif

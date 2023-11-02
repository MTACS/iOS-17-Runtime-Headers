
@interface _NSXPCConnectionExportedObjectTable : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    unsigned long long  _next;
    struct __CFDictionary { } * _objectToProxyNumber;
    NSXPCInterface * _proxy1Interface;
    id  _proxy1Object;
    struct __CFDictionary { } * _proxyNumberToInterface;
    struct __CFDictionary { } * _proxyNumberToObject;
    NSObject<OS_dispatch_group> * _replyGroup;
    bool  _valid;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end

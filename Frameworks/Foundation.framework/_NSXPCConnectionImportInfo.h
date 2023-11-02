
@interface _NSXPCConnectionImportInfo : NSObject {
    unsigned long long  _generationCount;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CFDictionary { } * _proxyNumberToCount;
    bool  _secTaskClearedOnce;
    void * _secTaskRef;
}

- (void)dealloc;
- (id)init;

@end

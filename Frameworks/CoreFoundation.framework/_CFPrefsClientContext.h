
@interface _CFPrefsClientContext : NSObject {
    struct __CFArray { } * _appGroups;
    _Atomic id  _cfprefsd;
    bool  _didDeferKVONotifications;
    NSObject<OS_xpc_object> * _entitlements;
    bool  _hasInFlightKVONotifications;
    bool  _impersonatingAnotherProcess;
    BOOL  _isPlatformBinary;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct __CFSet { } * _observedSources;
    BOOL  _sandboxed;
    struct __CFDictionary { } * _suiteCache;
    bool  _valid;
}

@end

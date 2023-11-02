
@interface _CFXPreferences : NSObject {
    NSObject<OS_xpc_object> * _directConnection;
    unsigned int  _euid;
    struct __CFSet { } * _groupContainersForCurrentUser;
    unsigned int  _launchdUID;
    struct __CFDictionary { } * _namedVolatileSources;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _namedVolatileSourcesLock;
    struct __CFDictionary { } * _searchLists;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _searchListsLock;
    struct __CFDictionary { } * _sources;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sourcesLock;
    NSObject<OS_xpc_object> * _systemSessionDaemonConnection;
    _Atomic BOOL  _userHomeDirectoryState;
    NSObject<OS_xpc_object> * _userSessionDaemonConnection;
}

+ (id)copyDefaultPreferences;

- (void)assertEquivalence:(bool)arg1 ofIdentifiers:(struct __CFArray { }*)arg2 containers:(struct __CFArray { }*)arg3 cloudConfigurationURLs:(struct __CFArray { }*)arg4;
- (void)assertEquivalence:(bool)arg1 ofIdentifiers:(struct __CFArray { }*)arg2 users:(struct __CFArray { }*)arg3 hosts:(struct __CFArray { }*)arg4 containers:(struct __CFArray { }*)arg5 managedFlags:(struct __CFArray { }*)arg6 cloudFlags:(struct __CFArray { }*)arg7;
- (void*)copyAppValueForKey:(struct __CFString { }*)arg1 identifier:(struct __CFString { }*)arg2 container:(struct __CFString { }*)arg3 configurationURL:(struct __CFURL { }*)arg4;
- (void*)copyValueForKey:(struct __CFString { }*)arg1 identifier:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 host:(struct __CFString { }*)arg4 container:(struct __CFString { }*)arg5;
- (void)dealloc;
- (void)generateKVONotificationsForIdentifier:(struct __CFString { }*)arg1 withOldValues:(id)arg2 newValues:(id)arg3;
- (id)init;
- (void)registerDefaultValues:(struct __CFDictionary { }*)arg1;
- (void)registerUserDefaultsInstance:(id)arg1 configurationURL:(struct __CFURL { }*)arg2;
- (void)resetPreferences:(bool)arg1;
- (void)setDaemonCacheEnabled:(bool)arg1 identifier:(struct __CFString { }*)arg2 user:(struct __CFString { }*)arg3 host:(struct __CFString { }*)arg4 container:(struct __CFString { }*)arg5;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2 appIdentifier:(struct __CFString { }*)arg3 container:(struct __CFString { }*)arg4 configurationURL:(struct __CFURL { }*)arg5;
- (void)simulateTimerSynchronizeForTestingForUser:(struct __CFString { }*)arg1;
- (void)unregisterUserDefaultsInstance:(id)arg1;

@end

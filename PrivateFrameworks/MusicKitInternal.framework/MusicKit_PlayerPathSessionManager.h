
@interface MusicKit_PlayerPathSessionManager : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _sessionIDsByPlayerPath;
}

+ (id)sharedSessionManager;

- (void).cxx_destruct;
- (id)init;
- (id)sessionIDForPlayerPath:(id)arg1;

@end

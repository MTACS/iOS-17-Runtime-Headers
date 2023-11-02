
@interface TSDClockSyncManager : NSObject {
    NSMutableDictionary * _clockSyncs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clockSyncsLock;
}

+ (id)sharedClockSyncManager;

- (void).cxx_destruct;
- (id)clockSyncForClockIdentifier:(unsigned long long)arg1 pid:(int)arg2;
- (id)init;
- (void)releaseClockSyncForClockIdentifier:(unsigned long long)arg1;

@end

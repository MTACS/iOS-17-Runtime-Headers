
@interface PXStoryLoadingStatusReporter : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _lock_lastUserActivity;
    NSMutableDictionary * _lock_stateIndexByClipIdentifier;
    struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; } * _lock_states;
    unsigned long long  _lock_statesCapacity;
    unsigned long long  _lock_statesCount;
    NSObject<OS_os_log> * _log;
    unsigned long long  _logContext;
}

@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned long long logContext;

- (void).cxx_destruct;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)_lock_stateForClipIdentifier:(long long)arg1;
- (void)_lock_updateStatusForLoadingState:(struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg1 error:(id)arg2 clipIdentifier:(long long)arg3;
- (void)dealloc;
- (id)init;
- (id)log;
- (unsigned long long)logContext;
- (void)notifyLoadingStatus:(unsigned char)arg1 error:(id)arg2 forClipIdentifier:(long long)arg3;
- (void)notifyPreloadingCompleteForClipIdentifier:(long long)arg1;
- (void)notifyPreloadingProgress:(double)arg1 error:(id)arg2 forClipIdentifier:(long long)arg3;
- (void)notifyStartedPreloadingClipIdentifier:(long long)arg1;
- (void)notifyUserDidNavigate;
- (void)notifyVisibility:(unsigned char)arg1 forClipIdentifier:(long long)arg2;
- (void)setLog:(id)arg1;
- (void)setLogContext:(unsigned long long)arg1;

@end

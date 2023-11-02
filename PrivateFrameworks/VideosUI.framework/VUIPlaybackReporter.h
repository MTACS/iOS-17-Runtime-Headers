
@interface VUIPlaybackReporter : NSObject {
    bool  _enforceSinglePlaybackSession;
    NSObject<OS_os_log> * _logObject;
    NSMutableArray * _sessions;
}

@property (nonatomic, readonly) bool enforceSinglePlaybackSession;
@property (nonatomic, retain) NSObject<OS_os_log> *logObject;
@property (nonatomic, retain) NSMutableArray *sessions;

- (void).cxx_destruct;
- (void)_beginSession:(id)arg1;
- (id)_createSessionForPlayer:(id)arg1;
- (void)_endSession:(id)arg1;
- (void)_endSessions:(id)arg1;
- (void)_handlePlaybackChangeForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3 reason:(id)arg4;
- (bool)_isTransitionValidForPlayer:(id)arg1 fromState:(id)arg2 toState:(id)arg3;
- (void)_logWithFormat:(id)arg1;
- (void)_playerCurrentMediaItemWillChange:(id)arg1;
- (void)_playerStateWillChange:(id)arg1;
- (void)_registerObservers;
- (void)_removeObservers;
- (void)_reportForSession:(id)arg1 state:(id)arg2 reason:(id)arg3;
- (id)_sessionForPlayer:(id)arg1;
- (void)dealloc;
- (bool)enforceSinglePlaybackSession;
- (id)init;
- (id)logObject;
- (id)sessions;
- (void)setLogObject:(id)arg1;
- (void)setSessions:(id)arg1;

@end

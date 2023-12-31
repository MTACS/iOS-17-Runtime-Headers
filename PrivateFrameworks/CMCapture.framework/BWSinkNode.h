
@interface BWSinkNode : BWNode {
    struct OpaqueFigSimpleMutex { } * _configurationHandlerLock;
    NSMutableArray * _configurationLiveHandlers;
    NSMutableArray * _configurationLiveIDs;
    NSMutableArray * _handlersToCallWhenActive;
    NSMutableArray * _handlersToCallWhenIdle;
    long long  _liveConfigurationID;
    NSString * _sinkID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _stateLock;
    FigStateMachine * _stateMachine;
}

@property (readonly) NSString *currentStateDebugString;
@property (readonly) bool isActive;
@property (readonly) long long liveConfigurationID;
@property (nonatomic, readonly, copy) NSString *sinkID;

+ (void)initialize;

- (void)addOutput:(id)arg1;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (id)currentStateDebugString;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)initWithSinkID:(id)arg1;
- (bool)isActive;
- (long long)liveConfigurationID;
- (id)nodeType;
- (void)notifyWhenActive:(id /* block */)arg1;
- (void)notifyWhenConfigurationID:(long long)arg1 becomesLive:(id /* block */)arg2;
- (void)notifyWhenIdle:(id /* block */)arg1;
- (id)sinkID;

@end

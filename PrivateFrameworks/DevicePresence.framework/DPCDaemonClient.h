
@interface DPCDaemonClient : NSObject <DPCXPCClientInterface> {
    unsigned long long  _currentError;
    float  _currentProbablity;
    unsigned long long  _currentWatchPresenceStatus;
    <DPCWatchPresenceDelegate> * _delegate;
}

@property float currentProbablity;
@property unsigned long long currentWatchPresenceStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DPCWatchPresenceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)currentProbablity;
- (unsigned long long)currentWatchPresenceStatus;
- (id)delegate;
- (void)informDelegateWithError:(unsigned long long)arg1;
- (void)informDelegateWithLatestEvent;
- (void)informDelegateWithWatchStatusEvent:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)newErrorDetected:(unsigned long long)arg1;
- (void)newWatchPresenceEvent:(unsigned long long)arg1 probability:(float)arg2;
- (void)newWatchStatusEvent:(unsigned long long)arg1;
- (void)setCurrentProbablity:(float)arg1;
- (void)setCurrentWatchPresenceStatus:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;

@end

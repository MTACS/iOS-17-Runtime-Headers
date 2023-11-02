
@interface BKHIDEventClient : NSObject <BSDescriptionProviding> {
    NSObject<OS_dispatch_queue> * _queue;
    <BKHIDEventClientDelegate> * _queue_delegate;
    bool  _queue_invalidated;
    int  _queue_pid;
    BSProcessDeathWatcher * _queue_pidWatcher;
    BSPortDeathSentinel * _queue_portSentinel;
    NSString * _queue_procName;
    BSMachPortSendRight * _queue_sendRight;
    bool  _terminating;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKHIDEventClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) BSMachPortSendRight *sendRight;
@property (readonly) Class superclass;
@property (getter=isTerminating, nonatomic) bool terminating;

- (void).cxx_destruct;
- (bool)_deathByPid;
- (bool)_deathBySendRight;
- (void)_queue_invalidate;
- (void)_queue_performDelegateCallout:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithPid:(int)arg1 sendRight:(id)arg2;
- (id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3;
- (id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3 processName:(id)arg4;
- (void)invalidate;
- (bool)isTerminating;
- (int)pid;
- (id)sendRight;
- (void)setDelegate:(id)arg1;
- (void)setTerminating:(bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

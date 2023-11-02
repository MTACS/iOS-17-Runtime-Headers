
@interface NPKRemoteButtonListener : NPKButtonListener <NPKDoublePressDelegationAssertionDelegate> {
    <NPKRemoteButtonListenerDelegate> * _delegate;
    NPKDoublePressDelegationAssertion * _delegationAssertion;
    bool  _enabled;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKRemoteButtonListenerDelegate> *delegate;
@property (nonatomic, retain) NPKDoublePressDelegationAssertion *delegationAssertion;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)delegationAssertion;
- (void)doublePressDelegationAssertion:(id)arg1 didReceiveTerminalAuthenticationRequestForPassWithUniqueID:(id)arg2;
- (void)doublePressDelegationAssertionDidReceiveDelegatedDoublePressEvent:(id)arg1;
- (bool)enabled;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setDelegationAssertion:(id)arg1;
- (void)setEnabled:(bool)arg1;

@end

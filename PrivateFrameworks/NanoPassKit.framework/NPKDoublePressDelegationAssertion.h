
@interface NPKDoublePressDelegationAssertion : NPKTransientAssertion {
    <NPKDoublePressDelegationAssertionDelegate> * _delegate;
}

@property (nonatomic) <NPKDoublePressDelegationAssertionDelegate> *delegate;

- (void).cxx_destruct;
- (void)_resyncState;
- (id)delegate;
- (void)handleDelegatedDoublePressEvent;
- (void)handleTerminalAuthenticationRequestedForPassWithUniqueID:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

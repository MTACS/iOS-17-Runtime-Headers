
@interface CXVoicemailProvider : NSObject <CXAbstractProvider, CXActionDelegateInternal, CXVoicemailProviderVendorProtocol> {
    CXAbstractProvider * _abstractProvider;
    <CXVoicemailProviderDelegate> * _delegate;
}

@property (nonatomic, readonly) CXAbstractProvider *abstractProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXVoicemailProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *pendingTransactions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CXVoicemailProviderHostProtocol> *voicemailProviderHostDelegate;

- (void).cxx_destruct;
- (id)abstractProvider;
- (oneway void)commitTransaction:(id)arg1;
- (id)delegate;
- (oneway void)handleActionTimeout:(id)arg1;
- (id)hostProtocolDelegate;
- (id)init;
- (void)invalidate;
- (id)pendingTransactions;
- (id)pendingVoicemailActionsOfClass:(Class)arg1 withVoicemailUUID:(id)arg2;
- (void)performAction:(id)arg1;
- (void)reportNewVoicemailWithUpdate:(id)arg1;
- (void)reportNewVoicemailsWithUpdates:(id)arg1;
- (void)reportVoicemailRemovedWithUUID:(id)arg1;
- (void)reportVoicemailUpdated:(id)arg1;
- (void)reportVoicemailsRemovedWithUUIDs:(id)arg1;
- (void)reportVoicemailsUpdated:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)voicemailProviderHostDelegate;

@end

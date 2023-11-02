
@interface TUCallFilterController : NSObject {
    <TUCallFilterControllerActions> * _actionsDelegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) <TUCallFilterControllerActions> *actionsDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) bool silenceUnknownCallersEnabled;
@property (nonatomic, readonly) bool silenceUnknownFaceTimeCallersEnabled;

- (void).cxx_destruct;
- (id)actionsDelegate;
- (id)addressesToCheckForRestrictionsInConversation:(id)arg1;
- (id)bundleIdentifierForCallProvider:(id)arg1;
- (unsigned long long)callFilterStatusForDialRequest:(id)arg1;
- (bool)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2;
- (bool)containsRestrictedHandle:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(bool)arg3;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;
- (bool)isUnknownAddress:(id)arg1 normalizedAddress:(id)arg2 forBundleIdentifier:(id)arg3;
- (bool)isUnknownHandle:(id)arg1;
- (id)policyForAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)queue;
- (id)restrictedContacts:(id)arg1 callProvider:(id)arg2;
- (bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;
- (bool)shouldRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2 performSynchronously:(bool)arg3;
- (bool)shouldRestrictAddresses:(id)arg1 performSynchronously:(bool)arg2;
- (bool)shouldRestrictConversation:(id)arg1 performSynchronously:(bool)arg2;
- (bool)shouldRestrictDialRequest:(id)arg1;
- (bool)shouldRestrictDialRequest:(id)arg1 performSynchronously:(bool)arg2;
- (bool)shouldRestrictJoinConversationRequest:(id)arg1 performSynchronously:(bool)arg2;
- (bool)silenceUnknownCallersEnabled;
- (bool)silenceUnknownFaceTimeCallersEnabled;
- (bool)willRestrictAddresses:(id)arg1 forBundleIdentifier:(id)arg2;

@end

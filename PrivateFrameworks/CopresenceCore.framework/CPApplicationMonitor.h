
@interface CPApplicationMonitor : NSObject <CPConversationManagerDataSourceObserver> {
    void appPolicyManager;
    void appVisibilityMonitor;
    void applicationController;
    void queue;
}

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 activityAuthorizationChangedForBundleIdentifier:(id)arg2;
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithApplicationController:(id)arg1 queue:(id)arg2;

@end

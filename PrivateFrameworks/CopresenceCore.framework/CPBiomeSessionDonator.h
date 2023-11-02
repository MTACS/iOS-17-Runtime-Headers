
@interface CPBiomeSessionDonator : NSObject <CPConversationManagerDataSourceObserver> {
    void biomeStream;
    void biomeStreamSender;
    void queue;
}

- (void).cxx_destruct;
- (void)conversationManager:(id)arg1 activityAuthorizationChangedForBundleIdentifier:(id)arg2;
- (void)conversationManager:(id)arg1 conversationChanged:(id)arg2;
- (id)init;
- (id)initWithDataSource:(id)arg1 parentQueue:(id)arg2;

@end

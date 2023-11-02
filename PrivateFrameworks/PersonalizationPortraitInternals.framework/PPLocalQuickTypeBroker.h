
@interface PPLocalQuickTypeBroker : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    _PASLock * _cacheLock;
    PPQuickTypeConnectionsServant * _connectionsServant;
    PPQuickTypeContactsServant * _contactsServant;
    PPQuickTypeEventsServant * _eventsServant;
    PPQuickTypeNavigationServant * _navigationServant;
    PPQuickTypeURLServant * _urlServant;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)filterFeedback:(id)arg1;
- (void)hibernateWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)processFeedback:(id)arg1;
- (void)quickTypeItemsWithLanguageModelingTokens:(id)arg1 localeIdentifier:(id)arg2 recipients:(id)arg3 bundleIdentifier:(id)arg4 limit:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)recentQuickTypeItemsForRecipients:(id)arg1 completion:(id /* block */)arg2;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (void)warmUpWithCompletion:(id /* block */)arg1;

@end

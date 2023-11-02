
@interface WBSPasswordBreachNotificationManager : NSObject {
    UNUserNotificationCenter * _notificationCenter;
    WBSPasswordWarningTopFraudTargetsManager * _topFraudTargetsManager;
}

+ (id)_bodyForHighLevelDomains:(id)arg1 deviceClass:(int)arg2 topFraudTargets:(id)arg3;
+ (id)_bodyForSavedAccounts:(id)arg1 withTopFraudTargets:(id)arg2;
+ (unsigned long long)_bodyStyleForTopFraudTargetDomains:(id)arg1 sensitiveDomains:(id)arg2 passwordsCount:(unsigned long long)arg3;
+ (bool)_highLevelDomain:(id)arg1 isIncludedInTopFraudTargets:(id)arg2;

- (void).cxx_destruct;
- (id)_contentWithSavedAccounts:(id)arg1 topFraudTargets:(id)arg2;
- (id)_titleForSavedAccounts:(id)arg1;
- (void)addBreachNotificationForSavedAccounts:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)init;

@end

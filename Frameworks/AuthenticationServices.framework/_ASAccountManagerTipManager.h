
@interface _ASAccountManagerTipManager : NSObject

+ (void)_acknowledgeTip:(long long)arg1;
+ (void)_checkEligibilityForFamilySharingTipWithCompletionHandler:(id /* block */)arg1;
+ (void)_checkEligibilityForGeneralSharingTipWithCompletionHandler:(id /* block */)arg1;
+ (void)_checkEligibilityForiCloudKeychainTipWithCompletionHandler:(id /* block */)arg1;
+ (id)_defaultKeyForTipType:(long long)arg1;
+ (bool)_hasAcknowledgedTip:(long long)arg1;
+ (id)_refreshDateForTip:(long long)arg1;
+ (void)fetchTipToShow:(id /* block */)arg1;
+ (void)userDidAcknowledgeTip:(long long)arg1;

@end

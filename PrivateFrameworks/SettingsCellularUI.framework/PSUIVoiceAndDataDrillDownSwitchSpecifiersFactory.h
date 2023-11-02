
@interface PSUIVoiceAndDataDrillDownSwitchSpecifiersFactory : NSObject

+ (id)getLoggerForSlot:(long long)arg1;
+ (bool)isVoLTESwitchTurnedOnByDefaultAndHidden:(id)arg1;
+ (bool)shouldShow5GSASwitchForSubscriptionContext:(id)arg1 RATMode:(int)arg2;
+ (bool)shouldShowAnyVoiceAndDataSwitchSpecifierForContext:(id)arg1 RATMode:(int)arg2;
+ (bool)shouldShowVoLTESwitchForSubscriptionContext:(id)arg1 RATMode:(int)arg2;
+ (bool)shouldShowVoNRSwitchForSubscriptionContext:(id)arg1 RATMode:(int)arg2;

- (id)create5GSASwitchSpecifierWithHostController:(id)arg1 parentSpecifier:(id)arg2;
- (id)createVoLTESwitchSpecifierWithHostController:(id)arg1 parentSpecifier:(id)arg2;
- (id)createVoNRSwitchSpecifierWithHostController:(id)arg1 parentSpecifier:(id)arg2;

@end

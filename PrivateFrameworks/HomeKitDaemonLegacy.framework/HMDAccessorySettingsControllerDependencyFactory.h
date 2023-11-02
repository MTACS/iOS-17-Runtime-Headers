
@interface HMDAccessorySettingsControllerDependencyFactory : HMFObject <HMDAccessorySettingsControllerDependencyFactory>

- (void)assertWithCondition:(bool)arg1 message:(id)arg2;
- (id)createMessageHandlerWithQueue:(id)arg1 delegate:(id)arg2;
- (id)settingModelForUpdateWithIdentifier:(id)arg1 parent:(id)arg2 value:(id)arg3 configNumber:(id)arg4;
- (id)timerWithReason:(long long)arg1 interval:(double)arg2;

@end

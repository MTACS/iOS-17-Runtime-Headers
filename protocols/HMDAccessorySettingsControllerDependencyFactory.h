
@protocol HMDAccessorySettingsControllerDependencyFactory

@required

- (void)assertWithCondition:(bool)arg1 message:(NSString *)arg2;
- (<HMDAccessorySettingsMessageHandler> *)createMessageHandlerWithQueue:(NSObject<OS_dispatch_queue> *)arg1 delegate:(id <HMDAccessorySettingsMessageController>)arg2;
- (HMDAccessorySettingModel *)settingModelForUpdateWithIdentifier:(NSUUID *)arg1 parent:(NSUUID *)arg2 value:(id)arg3 configNumber:(NSNumber *)arg4;
- (HMFTimer *)timerWithReason:(long long)arg1 interval:(double)arg2;

@end

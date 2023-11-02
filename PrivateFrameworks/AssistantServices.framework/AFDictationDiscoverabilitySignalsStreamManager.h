
@interface AFDictationDiscoverabilitySignalsStreamManager : NSObject

+ (void)sendDictationRequestStartedEventWithBundleIdentifier:(id)arg1 context:(id)arg2 userInfo:(id)arg3;
+ (void)sendSendMessageSentEventWithBundleIdentifier:(id)arg1 context:(id)arg2 userInfo:(id)arg3;
+ (void)sendSiriRequestStartedEventWithBundleIdentifier:(id)arg1 context:(id)arg2 userInfo:(id)arg3;

@end

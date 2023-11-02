
@interface IMTipKitEventReporter : NSObject

+ (id)sharedInstance;

- (void)sendBiomeSignal:(id)arg1;
- (void)sendCoreAnalyticsSilverEvent:(id)arg1;
- (void)sendFilterUnknownSenderStateChangedEvent;
- (void)sendINSendMessageIntentEvent;
- (void)sendJunkInboxOpenedEvent;
- (void)sendReceivedJunkEventIfNeeded;
- (void)sendReceivedPhotoEvent;
- (void)sendSavePhotoEvent;
- (void)sendSentMessageEvent;
- (void)sendSetNameAndPhotoProfileEvent;
- (void)sendTapbackSendEvent;

@end

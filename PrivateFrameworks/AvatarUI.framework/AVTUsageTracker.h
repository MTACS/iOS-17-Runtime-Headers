
@interface AVTUsageTracker : NSObject

+ (id)currentSession;
+ (void)trackCountOfMemojiInStore:(id)arg1;
+ (void)trackCountOfMemojiInStore:(id)arg1 withCoreAnalyticsClient:(id)arg2;
+ (void)trackStickerSentFromHostBundleIdentifier:(id)arg1;
+ (void)trackStickerSentFromHostBundleIdentifier:(id)arg1 withCoreAnalyticsClient:(id)arg2;

@end

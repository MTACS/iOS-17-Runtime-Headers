
@interface ICMentionNotificationController : NSObject

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *notificationSerialQueue;

+ (id)coalesceMentions:(id)arg1;
+ (id)noteTitleForMentions:(id)arg1;
+ (id)pendingMentionsInContext:(id)arg1 createdBeforeDate:(id)arg2;
+ (id)predicateForMentionsInState:(int)arg1 inContext:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfMention:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfParagraphForMention:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSentenceAfterMention:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSentenceBeforeMention:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSentenceForMention:(id)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfSnippetForMentions:(id)arg1;
+ (id)sameNoteMentionsFrom:(id)arg1;
+ (id)senderNameForMentions:(id)arg1;
+ (id)sharedController;
+ (id)snippetForMentions:(id)arg1;
+ (void)triggerNotificationForMentionAttachments:(id)arg1 context:(id)arg2;

- (void)applicationDidEnterBackground;
- (void)listenForReachabilityChange;
- (id)notificationSerialQueue;
- (void)reachabilityChanged:(id)arg1;
- (void)sendPendingNotifications;
- (void)sendPendingNotificationsCreatedBefore:(id)arg1;

@end

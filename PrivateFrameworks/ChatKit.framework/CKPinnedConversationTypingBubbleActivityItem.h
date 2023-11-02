
@interface CKPinnedConversationTypingBubbleActivityItem : NSObject <CKPinnedConversationActivityItem>

@property (nonatomic, readonly) bool activityItemAppearsWithAnimation;
@property (nonatomic, readonly) double activityItemContentScale;
@property (nonatomic, readonly) bool activityItemDisappearsWithAnimation;
@property (nonatomic, readonly) NSString *activityItemIdentifier;
@property (nonatomic, readonly) NSString *attachedContactItemIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)activityItemAppearsWithAnimation;
- (double)activityItemContentScale;
- (bool)activityItemDisappearsWithAnimation;
- (id)activityItemIdentifier;
- (id)activityItemView;
- (id)attachedContactItemIdentifier;

@end

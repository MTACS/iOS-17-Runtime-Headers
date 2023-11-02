
@protocol CKPinnedConversationActivityItem <NSObject>

@required

- (bool)activityItemAppearsWithAnimation;
- (double)activityItemContentScale;
- (bool)activityItemDisappearsWithAnimation;
- (NSString *)activityItemIdentifier;
- (UIView<CKPinnedConversationActivityItemView> *)activityItemView;
- (NSString *)attachedContactItemIdentifier;

@end

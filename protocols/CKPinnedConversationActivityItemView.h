
@protocol CKPinnedConversationActivityItemView

@required

- (<CKPinnedConversationActivityItem> *)activityItem;
- (double)activityItemToContactItemVerticalOverlap;
- (long long)activityItemViewContentScale;
- (<CKPinnedConversationActivityItemViewDelegate> *)activityItemViewDelegate;
- (long long)originationDirection;
- (long long)originationHorizontalDirection;
- (struct CGPoint { double x1; double x2; })originationPoint;
- (struct CGSize { double x1; double x2; })parentAvatarViewSize;
- (double)preferredTailAttachmentPointXCoordinate;
- (void)setActivityItem:(id <CKPinnedConversationActivityItem>)arg1;
- (void)setActivityItemViewContentScale:(long long)arg1;
- (void)setActivityItemViewDelegate:(id <CKPinnedConversationActivityItemViewDelegate>)arg1;
- (void)setOriginationDirection:(long long)arg1;
- (void)setOriginationHorizontalDirection:(long long)arg1;
- (void)setOriginationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setParentAvatarViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredTailAttachmentPointXCoordinate:(double)arg1;
- (bool)supportsActivityItemViewContentScale;
- (bool)supportsAlignmentWithOriginationSubAvatarFrame;
- (struct CGPoint { double x1; double x2; })tailAttachmentPoint;

@end

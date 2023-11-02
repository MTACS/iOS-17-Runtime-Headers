
@protocol AVTAvatarAttributeEditorLayout

@required

- (bool)RTL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attributesContentViewFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })attributesContentViewInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })attributesContentViewScrollIndicatorInsets;
- (double)avatarContainerAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarContainerFrame;
- (struct CGSize { double x1; double x2; })containerSize;
- (NSString *)contentSizeCategory;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })groupDialContainerFrame;
- (double)headerMaskingViewAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headerMaskingViewFrame;
- (double)maxGroupLabelWidth;
- (double)screenScale;
- (bool)showSideGroupPicker;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sideGroupContainerFrame;
- (unsigned long long)supportedLayoutOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userInfoFrame;
- (double)userInfoViewHeight;
- (double)verticalRuleAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalRuleFrame;

@end

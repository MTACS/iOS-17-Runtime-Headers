
@interface UIInputViewSetPlacementWrapper : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacement * _actualPlacement;
}

+ (id)placementWithPlacement:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accessoryViewWillAppear;
- (double)alpha;
- (Class)applicatorClassForKeyboard:(bool)arg1;
- (id)applicatorInfoForOwner:(id)arg1;
- (unsigned long long)computeComparisonMask;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;
- (bool)inputViewWillAppear;
- (bool)isEqual:(id)arg1;
- (bool)isInteractive;
- (bool)isUndocked;
- (bool)isVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(bool)arg2;
- (void)setDirty;
- (bool)showsEditItems;
- (bool)showsInputOrAssistantViews;
- (bool)showsInputViews;
- (bool)showsKeyboard;
- (id)subPlacements;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transform;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end

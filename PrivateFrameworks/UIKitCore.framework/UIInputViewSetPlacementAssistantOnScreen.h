
@interface UIInputViewSetPlacementAssistantOnScreen : UIInputViewSetPlacement <NSSecureCoding> {
    UIInputViewSetPlacementAccessoryOnScreen * _cachedSecondaryPlacement;
    NSArray * _subPlacements;
}

+ (id)infoWithPoint:(struct CGPoint { double x1; double x2; })arg1 isCompact:(bool)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 position:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accessoryViewWillAppear;
- (Class)applicatorClassForKeyboard:(bool)arg1;
- (unsigned long long)indexForPurpose:(unsigned long long)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inputAccessoryViewPadding;
- (double)inputAssistantViewHeightForInputViewSet:(id)arg1;
- (bool)inputViewWillAppear;
- (bool)isFloatingAssistantView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(bool)arg2;
- (bool)showsEditItems;
- (bool)showsInputOrAssistantViews;
- (bool)showsInputViews;
- (id)subPlacements;
- (id)subPlacementsForInputViewSet:(id)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;
- (double)verticalOffset;

@end

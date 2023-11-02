
@interface AVTAvatarAttributeEditorTransitionFromActionsStartingPortraitLayout : AVTAvatarAttributeEditorLayout {
    double  _attributesContentViewExtraHeight;
    double  _avatarContainerAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _avatarContainerFrame;
    bool  _showSideGroupPicker;
}

@property (nonatomic, readonly) double attributesContentViewExtraHeight;

- (double)attributesContentViewExtraHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attributesContentViewFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })attributesContentViewInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })attributesContentViewScrollIndicatorInsets;
- (double)avatarContainerAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarContainerFrame;
- (id)backgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })groupDialContainerFrame;
- (double)headerMaskingViewAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headerMaskingViewFrame;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 userInfoViewHeight:(double)arg3 screenScale:(double)arg4 RTL:(bool)arg5 avatarViewContainerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 attributesContentViewFrameExtraHeight:(double)arg7 avatarViewAlpha:(double)arg8 showSideGroupPicker:(bool)arg9;
- (bool)showSideGroupPicker;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sideGroupContainerFrame;
- (unsigned long long)supportedLayoutOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userInfoFrame;
- (double)verticalRuleAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalRuleFrame;

@end

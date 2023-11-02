
@interface AVTAvatarAttributeEditorLayout : NSObject <AVTAvatarAttributeEditorLayout> {
    bool  _RTL;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    NSString * _contentSizeCategory;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    double  _maxGroupLabelWidth;
    double  _screenScale;
    bool  _showSideGroupPicker;
    double  _userInfoViewHeight;
}

@property (nonatomic, readonly) bool RTL;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } attributesContentViewFrame;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } attributesContentViewInsets;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } attributesContentViewScrollIndicatorInsets;
@property (nonatomic, readonly) double avatarContainerAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avatarContainerFrame;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } containerSize;
@property (nonatomic, readonly, copy) NSString *contentSizeCategory;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } groupDialContainerFrame;
@property (nonatomic, readonly) double headerMaskingViewAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } headerMaskingViewFrame;
@property (nonatomic, readonly) double maxGroupLabelWidth;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) bool showSideGroupPicker;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sideGroupContainerFrame;
@property (nonatomic, readonly) unsigned long long supportedLayoutOrientation;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } userInfoFrame;
@property (nonatomic, readonly) double userInfoViewHeight;
@property (nonatomic, readonly) double verticalRuleAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } verticalRuleFrame;

- (void).cxx_destruct;
- (bool)RTL;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attributesContentViewFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })attributesContentViewInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })attributesContentViewScrollIndicatorInsets;
- (double)avatarContainerAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarContainerFrame;
- (id)backgroundColor;
- (struct CGSize { double x1; double x2; })containerSize;
- (id)contentSizeCategory;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })groupDialContainerFrame;
- (double)headerMaskingViewAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })headerMaskingViewFrame;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 userInfoViewHeight:(double)arg3 screenScale:(double)arg4 RTL:(bool)arg5 showSideGroupPicker:(bool)arg6;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 userInfoViewHeight:(double)arg3 screenScale:(double)arg4 RTL:(bool)arg5 showSideGroupPicker:(bool)arg6 maxGroupLabelWidth:(double)arg7;
- (double)maxGroupLabelWidth;
- (void)raiseExceptionForPropertyString:(id)arg1;
- (double)screenScale;
- (bool)showSideGroupPicker;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sideGroupContainerFrame;
- (unsigned long long)supportedLayoutOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userInfoFrame;
- (double)userInfoViewHeight;
- (double)verticalRuleAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })verticalRuleFrame;

@end

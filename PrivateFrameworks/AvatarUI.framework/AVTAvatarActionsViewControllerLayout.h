
@interface AVTAvatarActionsViewControllerLayout : NSObject <AVTAvatarActionsViewControllerLayout> {
    <AVTViewLayoutInfo> * _avtViewLayout;
    long long  _buttonCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _containerSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
}

@property (nonatomic, readonly) double actionButtonsViewAlpha;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } actionButtonsViewFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } avatarContainerViewFrame;
@property (nonatomic, readonly) <AVTViewLayoutInfo> *avtViewLayout;
@property (nonatomic, readonly) long long buttonCount;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } containerSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } userInfoFrame;

+ (double)buttonHeight;
+ (double)heightForButtonsViewWithButtonCount:(long long)arg1;

- (void).cxx_destruct;
- (double)actionButtonsViewAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actionButtonsViewFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })actionButtonsViewFrameForButtonCount:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarContainerViewFrame;
- (id)avtViewLayout;
- (long long)buttonCount;
- (struct CGSize { double x1; double x2; })containerSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithContainerSize:(struct CGSize { double x1; double x2; })arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 buttonCount:(long long)arg3 avtViewLayoutInfo:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userInfoFrame;

@end
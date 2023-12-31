
@interface FMBlurView : UIView {
    bool  _autosizesToFitSuperview;
}

@property (nonatomic) bool autosizesToFitSuperview;

- (bool)autosizesToFitSuperview;
- (void)didMoveToSuperview;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 autosizesToFitSuperview:(bool)arg2;
- (void)setAutosizesToFitSuperview:(bool)arg1;

@end

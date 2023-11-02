
@interface UIKBInputBackdropView : UIView {
    _UIVisualEffectBackdropView * _captureView;
    NSArray * _fullWidthConstraints;
    bool  _hasEndRect;
    bool  _hasStartRect;
    NSLayoutConstraint * _heightConstraint;
    double  _heightDiff;
    unsigned long long  _innerCorners;
    UIKBBackdropView * _inputBackdropFullView;
    UIKBBackdropView * _inputBackdropLeftView;
    UIKBBackdropView * _inputBackdropRightView;
    bool  _isTransitioning;
    NSLayoutConstraint * _leftWidthConstraint;
    double  _leftWidthDiff;
    NSLayoutConstraint * _rightWidthConstraint;
    double  _rightWidthDiff;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _savedEndRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _savedStartRect;
    NSArray * _splitConstraints;
    long long  _style;
    double  _tallHeight;
    double  _transitionGap;
    double  _transitionLeftOffset;
    double  _transitionRightOffset;
}

@property (nonatomic, retain) _UIVisualEffectBackdropView *captureView;
@property (nonatomic, retain) NSArray *fullWidthConstraints;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic) double heightDiff;
@property (nonatomic, retain) UIKBBackdropView *inputBackdropFullView;
@property (nonatomic, retain) UIKBBackdropView *inputBackdropLeftView;
@property (nonatomic, retain) UIKBBackdropView *inputBackdropRightView;
@property (nonatomic, retain) NSLayoutConstraint *leftWidthConstraint;
@property (nonatomic) double leftWidthDiff;
@property (nonatomic, retain) NSLayoutConstraint *rightWidthConstraint;
@property (nonatomic) double rightWidthDiff;
@property (nonatomic, retain) NSArray *splitConstraints;
@property (readonly) long long style;
@property (nonatomic) double tallHeight;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_endSplitTransitionIfNeeded:(bool)arg1;
- (bool)_isTransitioning;
- (void)_prepareWithLeftOffset:(double)arg1 gapWidth:(double)arg2;
- (void)_setInitialProgressWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setProgress:(double)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)_updateForLeftOffset:(double)arg1 rightOffset:(double)arg2;
- (id)captureView;
- (void)createSplitBackdropIfNeeded;
- (void)dealloc;
- (id)fullWidthConstraints;
- (id)heightConstraint;
- (double)heightDiff;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputBackdropFullView;
- (id)inputBackdropLeftView;
- (id)inputBackdropRightView;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutInputBackdropToSplitWithHeight:(double)arg1 innerCorners:(unsigned long long)arg2;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andRightViewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 innerCorners:(unsigned long long)arg3;
- (id)leftWidthConstraint;
- (double)leftWidthDiff;
- (void)prepareForSnapshotting;
- (void)restoreFromSnapshotting;
- (id)rightWidthConstraint;
- (double)rightWidthDiff;
- (void)setCaptureView:(id)arg1;
- (void)setFullWidthConstraints:(id)arg1;
- (void)setGestureProgressForSplit:(double)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setHeightDiff:(double)arg1;
- (void)setInputBackdropFullView:(id)arg1;
- (void)setInputBackdropLeftView:(id)arg1;
- (void)setInputBackdropRightView:(id)arg1;
- (void)setLeftWidthConstraint:(id)arg1;
- (void)setLeftWidthDiff:(double)arg1;
- (void)setProgress:(double)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 innerCorners:(unsigned long long)arg3;
- (void)setRightWidthConstraint:(id)arg1;
- (void)setRightWidthDiff:(double)arg1;
- (void)setSplitConstraints:(id)arg1;
- (void)setTallHeight:(double)arg1;
- (id)splitConstraints;
- (long long)style;
- (double)tallHeight;
- (int)textEffectsVisibilityLevel;
- (void)transitionToStyle:(long long)arg1 isSplit:(bool)arg2;

@end


@interface CACLabeledElementsOverlayView : UIView {
    UIView * _badgesContainer;
    UIView * _contrastBadgesContainer;
    bool  _displayElementRectangles;
    NSMutableArray * _labeledElements;
    bool  _positionAtLeft;
}

@property (nonatomic, retain) UIView *badgesContainer;
@property (nonatomic, retain) UIView *contrastBadgesContainer;
@property (nonatomic) bool displayElementRectangles;

- (void).cxx_destruct;
- (id)_badgeViewContainerWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingContrast:(bool)arg2;
- (id)_viewShowingDebuggingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)addLabeledElements:(id)arg1;
- (id)badgesContainer;
- (void)clearLabeledElements;
- (id)contrastBadgesContainer;
- (bool)displayElementRectangles;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBadgesContainer:(id)arg1;
- (void)setContrastBadgesContainer:(id)arg1;
- (void)setDisplayElementRectangles:(bool)arg1;

@end

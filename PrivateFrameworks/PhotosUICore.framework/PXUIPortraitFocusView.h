
@interface PXUIPortraitFocusView : PXPortraitFocusView <UIGestureRecognizerDelegate> {
    bool  _animateNextRender;
    bool  _drawingEnabled;
    CEKSubjectIndicatorView * _fixedFocusView;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_viewTapped:(id)arg1;
- (void)animateNextRender;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawingEnabled;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithMediaView:(id)arg1;
- (void)setDrawingEnabled:(bool)arg1;

@end

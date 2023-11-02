
@interface _UIPlatterContainerView : UIView {
    UIView * _platterContentView;
    _UIPlatterView * _source;
    _UIPlatterView * _target;
    _UIPlatterView * _updatedTarget;
    UIView * _updatedTargetWrapper;
}

@property (nonatomic, retain) UIView *platterContentView;
@property (nonatomic, retain) _UIPlatterView *source;
@property (nonatomic, retain) _UIPlatterView *target;
@property (nonatomic, retain) _UIPlatterView *updatedTarget;

- (void).cxx_destruct;
- (void)_updateTransforms;
- (void)applyRotation:(double)arg1;
- (void)applyTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)installPreviewContainer:(id)arg1 overrideSourceView:(id)arg2;
- (id)platterContentView;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlatterContentView:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setUpdatedTarget:(id)arg1;
- (id)source;
- (id)target;
- (id)updatedTarget;

@end

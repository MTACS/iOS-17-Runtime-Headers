
@interface _TVInspectorCapturingView : UIView {
    <_TVInspectorCapturingViewDelegate> * _delegate;
    UILabel * _descriptionLabel;
    bool  _testingHits;
}

@property (nonatomic) <_TVInspectorCapturingViewDelegate> *delegate;
@property (nonatomic, readonly) UILabel *descriptionLabel;
@property (getter=isTestingHits, nonatomic, readonly) bool testingHits;

- (void).cxx_destruct;
- (id)delegate;
- (id)descriptionLabel;
- (void)didTapView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTestingHits;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;

@end

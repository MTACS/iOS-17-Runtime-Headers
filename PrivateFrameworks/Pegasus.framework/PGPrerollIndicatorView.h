
@interface PGPrerollIndicatorView : UIView <PGButtonViewDelegate> {
    UILabel * _contentTypeLabel;
    PGDisplayLink * _displayLink;
    struct CGSize { 
        double width; 
        double height; 
    }  _labelSize;
    PGButtonView * _skipPrerollButtonView;
    PGControlsViewModel * _viewModel;
}

@property (nonatomic, readonly) UILabel *contentTypeLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PGDisplayLink *displayLink;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } labelSize;
@property (nonatomic, copy) NSString *labelText;
@property (nonatomic, readonly) PGButtonView *skipPrerollButtonView;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timeRemainingText;
@property (nonatomic, readonly) PGControlsViewModel *viewModel;

+ (double)preferredHeight;

- (void).cxx_destruct;
- (void)_layoutContentTypeLabel;
- (void)_layoutSkipPrerollButton;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_subviewTransform;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })buttonView:(id)arg1 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })buttonView:(id)arg1 imageRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 proposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })buttonView:(id)arg1 titleRectForContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 proposedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)buttonViewDidReceiveTouchUpInside:(id)arg1;
- (id)contentTypeLabel;
- (void)dealloc;
- (id)displayLink;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 viewModel:(id)arg2;
- (struct CGSize { double x1; double x2; })labelSize;
- (id)labelText;
- (double)labelWidth;
- (void)layoutSubviews;
- (void)setLabelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLabelText:(id)arg1;
- (void)setTimeRemainingText:(id)arg1;
- (id)skipPrerollButtonView;
- (id)timeRemainingText;
- (void)updateValues;
- (id)viewModel;

@end


@interface WFCompactHighlightedView : UIView <MTVisualStylingRequiring> {
    UIView * _backgroundView;
    UIView * _contentDimmingView;
    UIView * _contentView;
}

@property (nonatomic) UIView *backgroundView;
@property (nonatomic) UIView *contentDimmingView;
@property (nonatomic, retain) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)contentDimmingView;
- (id)contentView;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)requiredVisualStyleCategories;
- (void)setBackgroundView:(id)arg1;
- (void)setContentDimmingView:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

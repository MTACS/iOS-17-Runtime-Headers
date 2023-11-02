
@interface SBTitledHomeScreenButton : SBHomeScreenButton <UIPointerInteractionDelegate> {
    NSString * _content;
    struct SBTitledHomeScreenButtonMetrics { 
        double minimumButtonWidth; 
        double minimumButtonHeight; 
        double minimumHorizontalPadding; 
        double baselineToTop; 
        double preferredTitlePointSize; 
        double minimumTitlePointSize; 
    }  _metrics;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredContentFittingSize;
    long long  _type;
}

@property (nonatomic, copy) NSString *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct SBTitledHomeScreenButtonMetrics { double x1; double x2; double x3; double x4; double x5; double x6; } metrics;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentFittingSize;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)content;
- (id)contentImageWithTitle:(id)arg1;
- (id)defaultContentImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 backgroundView:(id)arg2 type:(long long)arg3 content:(id)arg4;
- (struct SBTitledHomeScreenButtonMetrics { double x1; double x2; double x3; double x4; double x5; double x6; })metrics;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentFittingSize;
- (void)setContent:(id)arg1;
- (void)setMetrics:(struct SBTitledHomeScreenButtonMetrics { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setPreferredContentFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setType:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)type;

@end

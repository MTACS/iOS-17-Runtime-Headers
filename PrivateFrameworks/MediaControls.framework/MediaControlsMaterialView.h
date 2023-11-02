
@interface MediaControlsMaterialView : UIView <MTVisualStylingProviding> {
    UIView * _backgroundView;
    UIView * _highlightView;
    bool  _highlighted;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setContinuousCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end

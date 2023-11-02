
@interface MRUViewServiceRoutingFooterView : UIView <MRUVisualStylingProviderObserver, UIPointerInteractionDelegate> {
    UIButton * _button;
    UIView * _separatorView;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, readonly) UIButton *button;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *separatorView;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (void)setStylingProvider:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stylingProvider;
- (void)updateContentSizeCategory;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end

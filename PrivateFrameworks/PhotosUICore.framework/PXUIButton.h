
@interface PXUIButton : UIButton <UIPointerInteractionDelegate> {
    UIPointerInteraction * _pointerInteraction;
    PXUIButtonConfiguration * _px_configuration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPointerInteraction *pointerInteraction;
@property (nonatomic, copy) PXUIButtonConfiguration *px_configuration;
@property (readonly) Class superclass;

+ (id)buttonWithWithCursorEffect:(long long)arg1 target:(id)arg2 action:(SEL)arg3;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pointerRectForCurrentState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (id)px_configuration;
- (void)setHighlighted:(bool)arg1;
- (void)setPx_configuration:(id)arg1;

@end

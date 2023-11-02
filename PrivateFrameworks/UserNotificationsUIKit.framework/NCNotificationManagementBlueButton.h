
@interface NCNotificationManagementBlueButton : UIButton <UIPointerInteractionDelegate> {
    UIColor * _backgroundColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)buttonWithTitle:(id)arg1;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;

@end


@interface _UIAlertControllerModernTVBackgroundView : UIView <UIInterfaceActionVisualGroupBackgroundDisplaying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })backgroundInsetAmount;
+ (double)contentCornerRadius;
+ (id)newBackgroundVisualEffectInAlertGroup;
+ (double)platterHairlineWidth;

- (void)_configurePlatterHairline;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

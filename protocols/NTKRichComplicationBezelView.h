
@protocol NTKRichComplicationBezelView <NSObject>

@required

- (double)bezelTextAlpha;
- (double)bezelTextAngularWidth;
- (UIColor *)bezelTextColor;
- (<NTKRichComplicationBezelViewDelegate> *)bezelTextDelegate;
- (double)bezelTextRadius;
- (void)setBezelTextAlpha:(double)arg1;
- (void)setBezelTextColor:(UIColor *)arg1;
- (void)setBezelTextDelegate:(id <NTKRichComplicationBezelViewDelegate>)arg1;
- (void)setBezelTextRadius:(double)arg1;

@end

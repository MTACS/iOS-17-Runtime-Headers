
@protocol FxPixelTransformsAPI

@required

- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })destinationInversePixelTransform;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })destinationPixelTransform;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })inversePixelTransform;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransform;

@end

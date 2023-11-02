
@interface OZFxPixelTransformsHandler : NSObject <FxPixelTransformsAPI, PROAPIObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })destinationInversePixelTransform;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })destinationPixelTransform;
- (id)init;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })inversePixelTransform;
- (struct PCMatrix44Tmpl<double> { double x1[4][4]; })pixelTransform;
- (void)setAgent:(const void*)arg1;
- (void)setPostTransform:(const void*)arg1;
- (void)setPreTransform:(const void*)arg1;

@end

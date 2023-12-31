
@interface SXGradientFactory : NSObject <SXGradientFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)colorsFromColorStops:(id)arg1;
- (id)gradientForColorStops:(id)arg1 angle:(double)arg2;
- (id)locationsFromColorStops:(id)arg1;

@end

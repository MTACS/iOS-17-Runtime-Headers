
@interface NWMTemperatureColor : NSObject <NWMColorPalette>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)colorForTemperature:(id)arg1;
+ (id)colorSpectrum;
+ (void)colorSpectrumBetweenLow:(id)arg1 high:(id)arg2 handler:(id /* block */)arg3;

@end

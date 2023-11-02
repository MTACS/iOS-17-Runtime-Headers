
@protocol HFColorPrimitive <NSObject>

@required

- (HFRGBColor *)hf_RGBColorRepresentation;
- (NSString *)valueDescription;

@optional

- (HFTemperatureColor *)hf_temperatureColorRepresentation;

@end

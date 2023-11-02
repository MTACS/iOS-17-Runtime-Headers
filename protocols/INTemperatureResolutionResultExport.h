
@protocol INTemperatureResolutionResultExport <NSObject, JSExport>

@required

+ (id)confirmationRequiredWithTemperatureToConfirm:(NSMeasurement *)arg1;
+ (id)disambiguationWithTemperaturesToDisambiguate:(NSArray *)arg1;
+ (id)successWithResolvedTemperature:(NSMeasurement *)arg1;

- (id)init;

@end

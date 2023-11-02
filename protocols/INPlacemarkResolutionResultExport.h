
@protocol INPlacemarkResolutionResultExport <NSObject, JSExport>

@required

+ (id)confirmationRequiredWithPlacemarkToConfirm:(CLPlacemark *)arg1;
+ (id)disambiguationWithPlacemarksToDisambiguate:(NSArray *)arg1;
+ (id)successWithResolvedPlacemark:(CLPlacemark *)arg1;

- (id)init;

@end

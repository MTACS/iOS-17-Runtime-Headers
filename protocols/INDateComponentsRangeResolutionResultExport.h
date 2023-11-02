
@protocol INDateComponentsRangeResolutionResultExport <NSObject, JSExport>

@required

+ (id)confirmationRequiredWithDateComponentsRangeToConfirm:(INDateComponentsRange *)arg1;
+ (id)disambiguationWithDateComponentsRangesToDisambiguate:(NSArray *)arg1;
+ (id)successWithResolvedDateComponentsRange:(INDateComponentsRange *)arg1;

- (id)init;

@end

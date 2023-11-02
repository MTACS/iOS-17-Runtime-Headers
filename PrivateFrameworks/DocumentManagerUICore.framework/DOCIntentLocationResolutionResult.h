
@interface DOCIntentLocationResolutionResult : INObjectResolutionResult

+ (id)confirmationRequiredWithDOCIntentLocationToConfirm:(id)arg1;
+ (id)disambiguationWithDOCIntentLocationsToDisambiguate:(id)arg1;
+ (id)successWithResolvedDOCIntentLocation:(id)arg1;
+ (bool)supportsSecureCoding;

@end

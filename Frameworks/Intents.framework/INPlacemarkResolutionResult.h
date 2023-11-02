
@interface INPlacemarkResolutionResult : INIntentResolutionResult <INPlacemarkResolutionResultExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithPlacemarkToConfirm:(id)arg1;
+ (id)disambiguationWithPlacemarksToDisambiguate:(id)arg1;
+ (id)successWithResolvedPlacemark:(id)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativePlacemarks:(id)arg2;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end


@interface INDateComponentsRangeResolutionResult : INIntentResolutionResult <INDateComponentsRangeResolutionResultExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithDateComponentsRangeToConfirm:(id)arg1;
+ (id)disambiguationWithDateComponentsRangesToDisambiguate:(id)arg1;
+ (id)successWithResolvedDateComponentsRange:(id)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativeDateComponentsRanges:(id)arg2;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end

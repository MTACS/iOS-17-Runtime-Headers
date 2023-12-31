
@interface INSpeakableStringResolutionResult : INIntentResolutionResult <INSpeakableStringResolutionResultExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)confirmationRequiredWithStringToConfirm:(id)arg1;
+ (id)disambiguationWithStringsToDisambiguate:(id)arg1;
+ (id)successWithResolvedString:(id)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativeStrings:(id)arg2;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end


@protocol INSetNumericSettingIntentHandling <NSObject>

@required

- (void)handleSetNumericSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetNumericSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetNumericSettingIntentResponse *, void*

@optional

- (void)confirmSetNumericSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetNumericSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetNumericSettingIntentResponse *, void*
- (void)resolveActionForSetNumericSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetNumericSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSettingActionResolutionResult *, void*
- (void)resolveBoundedValueForSetNumericSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetNumericSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBoundedSettingValueResolutionResult *, void*
- (void)resolveNumericValueForSetNumericSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetNumericSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INNumericSettingValueResolutionResult *, void*
- (void)resolveSettingMetadataForSetNumericSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetNumericSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSettingMetadataResolutionResult *, void*
- (void)resolveTemporalEventTriggerForSetNumericSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetNumericSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTemporalEventTriggerResolutionResult *, void*

@end

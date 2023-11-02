
@protocol INSetLabeledSettingIntentHandling <NSObject>

@required

- (void)handleSetLabeledSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetLabeledSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetLabeledSettingIntentResponse *, void*

@optional

- (void)confirmSetLabeledSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetLabeledSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetLabeledSettingIntentResponse *, void*
- (void)resolveLabeledValueForSetLabeledSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetLabeledSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveSettingMetadataForSetLabeledSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetLabeledSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSettingMetadataResolutionResult *, void*
- (void)resolveTemporalEventTriggerForSetLabeledSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetLabeledSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTemporalEventTriggerResolutionResult *, void*

@end


@protocol INSetTemporalSettingIntentHandling <NSObject>

@required

- (void)handleSetTemporalSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetTemporalSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetTemporalSettingIntentResponse *, void*

@optional

- (void)confirmSetTemporalSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetTemporalSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetTemporalSettingIntentResponse *, void*
- (void)resolveActionForSetTemporalSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetTemporalSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSettingActionResolutionResult *, void*
- (void)resolveSettingMetadataForSetTemporalSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetTemporalSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSettingMetadataResolutionResult *, void*
- (void)resolveTemporalEventTriggerForSetTemporalSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetTemporalSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTemporalEventTriggerResolutionResult *, void*
- (void)resolveTimeValueForSetTemporalSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetTemporalSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsRangeResolutionResult *, void*

@end

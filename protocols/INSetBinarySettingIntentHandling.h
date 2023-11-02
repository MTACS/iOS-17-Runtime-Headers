
@protocol INSetBinarySettingIntentHandling <NSObject>

@required

- (void)handleSetBinarySetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetBinarySettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetBinarySettingIntentResponse *, void*

@optional

- (void)confirmSetBinarySetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INSetBinarySettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSetBinarySettingIntentResponse *, void*
- (void)resolveBinaryValueForSetBinarySetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetBinarySettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBinarySettingValueResolutionResult *, void*
- (void)resolveSettingMetadataForSetBinarySetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetBinarySettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSettingMetadataResolutionResult *, void*
- (void)resolveTemporalEventTriggerForSetBinarySetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INSetBinarySettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INTemporalEventTriggerResolutionResult *, void*

@end


@protocol INGetSettingIntentHandling <NSObject>

@required

- (void)handleGetSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INGetSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INGetSettingIntentResponse *, void*

@optional

- (void)confirmGetSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INGetSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INGetSettingIntentResponse *, void*
- (void)resolveConfirmationValueForGetSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INGetSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INBinarySettingValueResolutionResult *, void*
- (void)resolveSettingMetadataForGetSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INGetSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSettingMetadataResolutionResult *, void*

@end

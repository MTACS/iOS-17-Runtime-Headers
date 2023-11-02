
@protocol INOpenSettingIntentHandling <NSObject>

@required

- (void)handleOpenSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INOpenSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INOpenSettingIntentResponse *, void*

@optional

- (void)confirmOpenSetting:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INOpenSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INOpenSettingIntentResponse *, void*
- (void)resolveSearchQueryForOpenSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INOpenSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSpeakableStringResolutionResult *, void*
- (void)resolveSettingMetadataForOpenSetting:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INOpenSettingIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INSettingMetadataResolutionResult *, void*

@end

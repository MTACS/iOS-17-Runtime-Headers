
@protocol SetAudioLanguageIntentHandling <NSObject>

@required

- (void)handleSetAudioLanguage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetAudioLanguageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetAudioLanguageIntentResponse *, void*
- (void)handleSetAudioLanguage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetAudioLanguageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetAudioLanguageIntentResponse *, void*
- (void)resolveDeviceForSetAudioLanguage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetAudioLanguageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetAudioLanguageDeviceResolutionResult *, void*
- (void)resolveDeviceForSetAudioLanguage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetAudioLanguageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetAudioLanguageDeviceResolutionResult *, void*
- (void)resolveLanguageForSetAudioLanguage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetAudioLanguageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetAudioLanguageLanguageResolutionResult *, void*
- (void)resolveLanguageForSetAudioLanguage:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SetAudioLanguageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetAudioLanguageLanguageResolutionResult *, void*

@optional

- (void)confirmSetAudioLanguage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetAudioLanguageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetAudioLanguageIntentResponse *, void*
- (void)confirmSetAudioLanguage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SetAudioLanguageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SetAudioLanguageIntentResponse *, void*

@end

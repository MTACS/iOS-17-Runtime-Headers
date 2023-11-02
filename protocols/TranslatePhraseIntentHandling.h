
@protocol TranslatePhraseIntentHandling <NSObject>

@required

- (void)handleTranslatePhrase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: TranslatePhraseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TranslatePhraseIntentResponse *, void*
- (void)handleTranslatePhrase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: TranslatePhraseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TranslatePhraseIntentResponse *, void*
- (void)resolvePhraseForTranslatePhrase:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: TranslatePhraseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolvePhraseForTranslatePhrase:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: TranslatePhraseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveTargetLanguageForTranslatePhrase:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: TranslatePhraseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*
- (void)resolveTargetLanguageForTranslatePhrase:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: TranslatePhraseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INStringResolutionResult *, void*

@optional

- (void)confirmTranslatePhrase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: TranslatePhraseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TranslatePhraseIntentResponse *, void*
- (void)confirmTranslatePhrase:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: TranslatePhraseIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, TranslatePhraseIntentResponse *, void*

@end


@interface SiriTranslationIntents.TranslatePhraseIntentHandler : NSObject <TranslatePhraseIntentHandling> {
    void deviceState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  log;
    void translationApiClient;
}

- (void).cxx_destruct;
- (void)confirmTranslatePhrase:(id)arg1 completion:(id /* block */)arg2;
- (void)handleTranslatePhrase:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolvePhraseForTranslatePhrase:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveTargetLanguageForTranslatePhrase:(id)arg1 withCompletion:(id /* block */)arg2;

@end

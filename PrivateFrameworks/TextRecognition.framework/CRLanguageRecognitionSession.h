
@interface CRLanguageRecognitionSession : NSObject <CRTextDecodingLanguageRecognitionSession> {
    NLLanguageRecognizer * _languageRecognizer;
    CRLanguageRecognitionContext * _latinLanguageRecognitionContext;
}

@property (retain) NLLanguageRecognizer *languageRecognizer;
@property (retain) CRLanguageRecognitionContext *latinLanguageRecognitionContext;

- (void).cxx_destruct;
- (void)completeSession;
- (id)init;
- (id)languageRecognizer;
- (id)latinLanguageRecognitionContext;
- (void)processFeature:(id)arg1 context:(id)arg2;
- (void)setLanguageRecognizer:(id)arg1;
- (void)setLatinLanguageRecognitionContext:(id)arg1;

@end

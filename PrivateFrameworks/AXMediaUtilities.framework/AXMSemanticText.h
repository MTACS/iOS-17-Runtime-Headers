
@interface AXMSemanticText : NSObject {
    NSLocale * _locale;
    NSMutableAttributedString * _text;
    long long  _tokenizedLength;
    NSString * _transformedSpeechText;
}

@property (nonatomic, readonly) bool isSemanticallyComplete;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, readonly) NSString *preprocessedText;
@property (nonatomic) long long tokenizedLength;
@property (nonatomic, retain) NSString *transformedSpeechText;

- (void).cxx_destruct;
- (void)addCustomPattern:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addDataDetector:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addIsInLexionMarker:(bool)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addNLPToken:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addNumericToken:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)addSemanticErrorWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)enumerateCustomPatterns:(id /* block */)arg1;
- (void)enumerateDataDetectors:(id /* block */)arg1;
- (void)enumerateLexiconMarkers:(id /* block */)arg1;
- (void)enumerateNLPTokens:(id /* block */)arg1;
- (void)enumerateNumericTokens:(id /* block */)arg1;
- (void)enumerateSemanticErrors:(id /* block */)arg1;
- (id)initWithText:(id)arg1 locale:(id)arg2;
- (bool)isSemanticallyComplete;
- (id)locale;
- (id)makeCursor;
- (id)preprocessedText;
- (void)setLocale:(id)arg1;
- (void)setTokenizedLength:(long long)arg1;
- (void)setTransformedSpeechText:(id)arg1;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (long long)tokenizedLength;
- (id)transformedSpeechText;

@end

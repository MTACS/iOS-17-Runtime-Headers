
@interface JULanguageAwareString : NSObject <JUWritingDirectionContentProtocol> {
    void $__lazy_storage_$_attributedString;
    void $__lazy_storage_$_characterCount;
    void $__lazy_storage_$_isEmpty;
    void $__lazy_storage_$_juFullRange;
    void $__lazy_storage_$_localizedLowercase;
    void $__lazy_storage_$_localizedUppercase;
    void $__lazy_storage_$_newlinesCollapsedToSpace;
    void $__lazy_storage_$_thresholdBaseWritingDirection;
    void $__lazy_storage_$_trimmed;
    void $__lazy_storage_$_utf16Count;
    void $__lazy_storage_$_utf32Count;
    void baseAttributedString;
    void cachedTextStorage;
    void knownBaseWritingDirections;
    void numbers;
    void paragraphs;
    void string;
    void words;
}

@property (nonatomic, retain) NSAttributedString *attributedString;
@property (nonatomic) bool isEmpty;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } juFullRange;
@property (nonatomic) long long length;
@property (nonatomic, retain) JULanguageAwareString *localizedLowercase;
@property (nonatomic, retain) JULanguageAwareString *localizedUppercase;
@property (nonatomic, retain) JULanguageAwareString *newlinesCollapsedToSpace;
@property (nonatomic) long long numberOfCharacters;
@property (nonatomic, readonly) NSArray *numbers;
@property (nonatomic, readonly) NSArray *paragraphs;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic) long long thresholdBaseWritingDirection;
@property (nonatomic, retain) JULanguageAwareString *trimmed;
@property (nonatomic) long long utf32Length;
@property (nonatomic, readonly) NSArray *words;

+ (id)JULanguageAwareStringEmpty;
+ (bool)alwaysGenerateAttributedString;
+ (id)delegate;
+ (bool)keepStatisticsOnLanguageComponents;
+ (void)setAlwaysGenerateAttributedString:(bool)arg1;
+ (void)setDelegate:(id)arg1;
+ (void)setKeepStatisticsOnLanguageComponents:(bool)arg1;

- (void).cxx_destruct;
- (id)attributedString;
- (long long)baseWritingDirectionForCharacterAtLocation:(long long)arg1;
- (id)init;
- (id)initWithAttributedString:(id)arg1 baseParagraphStyle:(id)arg2 keepStatisticsOnLanguageComponents:(bool)arg3;
- (id)initWithLanguageAwareString:(id)arg1 attributes:(id)arg2 keepStatisticsOnLanguageComponents:(bool)arg3;
- (id)initWithString:(id)arg1 attributes:(id)arg2 baseParagraphStyle:(id)arg3 keepStatisticsOnLanguageComponents:(bool)arg4;
- (id)initWithString:(id)arg1 baseParagraphStyle:(id)arg2 generateAttributedString:(bool)arg3 keepStatisticsOnLanguageComponents:(bool)arg4;
- (bool)isEmpty;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })juFullRange;
- (long long)length;
- (id)localizedLowercase;
- (id)localizedUppercase;
- (id)newlinesCollapsedToSpace;
- (long long)numberOfCharacters;
- (id)numbers;
- (id)paragraphs;
- (void)setAttributedString:(id)arg1;
- (void)setIsEmpty:(bool)arg1;
- (void)setJuFullRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setLength:(long long)arg1;
- (void)setLocalizedLowercase:(id)arg1;
- (void)setLocalizedUppercase:(id)arg1;
- (void)setNewlinesCollapsedToSpace:(id)arg1;
- (void)setNumberOfCharacters:(long long)arg1;
- (void)setThresholdBaseWritingDirection:(long long)arg1;
- (void)setTrimmed:(id)arg1;
- (void)setUtf32Length:(long long)arg1;
- (id)string;
- (long long)thresholdBaseWritingDirection;
- (id)trimmed;
- (long long)utf32Length;
- (id)words;
- (long long)writingDirectionOfLine:(long long)arg1 maximumLinesShown:(long long)arg2 withWidth:(double)arg3 lineBreakMode:(long long)arg4 cacheLayoutInfo:(bool)arg5;
- (id)writingDirectionsQuantities;

@end

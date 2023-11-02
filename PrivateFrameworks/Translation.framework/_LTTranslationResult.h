
@interface _LTTranslationResult : NSObject <NSSecureCoding> {
    NSArray * _alignments;
    _LTDisambiguableResult * _disambiguableResult;
    NSString * _identifier;
    bool  _isFinal;
    NSLocale * _locale;
    long long  _route;
    NSString * _sanitizedSourceString;
    NSString * _sourceString;
    NSArray * _translations;
}

@property (nonatomic, copy) NSArray *alignments;
@property (nonatomic, copy) _LTDisambiguableResult *disambiguableResult;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isFinal;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic) long long route;
@property (nonatomic, copy) NSString *sanitizedSourceString;
@property (nonatomic, copy) NSString *sourceString;
@property (nonatomic, copy) NSArray *translations;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alignments;
- (id)disambiguableResult;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isFinal;
- (id)locale;
- (long long)route;
- (id)sanitizedSourceString;
- (void)setAlignments:(id)arg1;
- (void)setDisambiguableResult:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsFinal:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setRoute:(long long)arg1;
- (void)setSanitizedSourceString:(id)arg1;
- (void)setSourceString:(id)arg1;
- (void)setTranslations:(id)arg1;
- (id)sourceString;
- (id)translations;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)passthroughResultWithString:(id)arg1 sanitizedString:(id)arg2 locale:(id)arg3;
+ (id)resultWithLocale:(id)arg1 translations:(id)arg2;

- (id)initWithOspreyBatchResponse:(id)arg1 sourceText:(id)arg2;
- (id)initWithOspreyResponse:(id)arg1;
- (id)initWithOspreySpeechTranslationMTResponse:(id)arg1 sourceText:(id)arg2 censorSpeech:(bool)arg3;
- (void)updateAlignmentWithSourceSpan:(id)arg1 targetSpan:(id)arg2;

@end

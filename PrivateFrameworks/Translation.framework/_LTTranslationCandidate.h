
@interface _LTTranslationCandidate : NSObject <NSSecureCoding> {
    double  _confidence;
    NSString * _formattedString;
    NSArray * _genderAlternatives;
    bool  _lowConfidence;
    NSArray * _preToPostITN;
    NSString * _romanization;
    NSString * _sanitizedFormattedString;
    NSArray * _senses;
    _LTTranslationStatistics * _statistics;
    NSArray * _tokens;
}

@property (nonatomic) double confidence;
@property (nonatomic, copy) NSString *formattedString;
@property (nonatomic, copy) NSArray *genderAlternatives;
@property (getter=isLowConfidence, nonatomic) bool lowConfidence;
@property (nonatomic, copy) NSArray *preToPostITN;
@property (nonatomic, copy) NSString *romanization;
@property (nonatomic, copy) NSString *sanitizedFormattedString;
@property (nonatomic, copy) NSArray *senses;
@property (nonatomic, copy) _LTTranslationStatistics *statistics;
@property (nonatomic, copy) NSArray *tokens;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (id)genderAlternatives;
- (id)initWithCoder:(id)arg1;
- (bool)isLowConfidence;
- (id)preToPostITN;
- (id)romanization;
- (id)sanitizedFormattedString;
- (id)senses;
- (void)setConfidence:(double)arg1;
- (void)setFormattedString:(id)arg1;
- (void)setGenderAlternatives:(id)arg1;
- (void)setLowConfidence:(bool)arg1;
- (void)setPreToPostITN:(id)arg1;
- (void)setRomanization:(id)arg1;
- (void)setSanitizedFormattedString:(id)arg1;
- (void)setSenses:(id)arg1;
- (void)setStatistics:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)statistics;
- (id)tokens;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

- (id)initWithFormattedString:(id)arg1 sanitizedFormattedString:(id)arg2 confidence:(double)arg3 lowConfidence:(bool)arg4 romanization:(id)arg5 tokens:(id)arg6 preToPostITN:(id)arg7;
- (id)initWithOspreyMtResponsePhrase:(id)arg1 locale:(id)arg2 censorSpeech:(bool)arg3;
- (id)initWithOspreyMtResponsePhrase:(id)arg1 locale:(id)arg2 injectingGenderTranslation:(id)arg3 genderInjectedMetaInfo:(id)arg4;
- (id)initWithOspreyPhrase:(id)arg1;
- (void)updateWithEngineMeta:(id)arg1 locale:(id)arg2;

@end

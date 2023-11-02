
@interface _LTDTextStreamingConfigurationModel : NSObject {
    long long  _maxPartialTranslationAttempts;
    double  _maxTimeBetweenTranslations;
    long long  _minNumberOfCharactersForTranslation;
    double  _minTimeBetweenTranslations;
    double  _userIdleTime;
}

@property (nonatomic, readonly) long long maxPartialTranslationAttempts;
@property (nonatomic, readonly) double maxTimeBetweenTranslations;
@property (nonatomic, readonly) long long minNumberOfCharactersForTranslation;
@property (nonatomic, readonly) double minTimeBetweenTranslations;
@property (nonatomic, readonly) double userIdleTime;

- (id)initWithDictionary:(id)arg1;
- (long long)maxPartialTranslationAttempts;
- (double)maxTimeBetweenTranslations;
- (long long)minNumberOfCharactersForTranslation;
- (double)minTimeBetweenTranslations;
- (double)userIdleTime;

@end


@interface _LTTextStreamingConfiguration : NSObject <NSCopying, NSSecureCoding> {
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

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMinTimeBetweenTranslations:(double)arg1 maxTimeBetweenTranslations:(double)arg2 userIdleTime:(double)arg3 maxPartialTranslationAttempts:(long long)arg4 minNumberOfCharactersForTranslation:(long long)arg5;
- (long long)maxPartialTranslationAttempts;
- (double)maxTimeBetweenTranslations;
- (long long)minNumberOfCharactersForTranslation;
- (double)minTimeBetweenTranslations;
- (void)updateMinTimeBetweenTranslations:(double)arg1 maxTimeBetweenTranslations:(double)arg2 userIdleTime:(double)arg3;
- (double)userIdleTime;

@end

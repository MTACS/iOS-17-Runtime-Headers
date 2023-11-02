
@interface _LTServerEndpointerFeatures : NSObject <NSSecureCoding> {
    double  _eosLikelihood;
    NSArray * _pauseCounts;
    long long  _processedAudioDurationInMilliseconds;
    double  _silencePosterior;
    long long  _trailingSilenceDuration;
    long long  _wordCount;
}

@property (nonatomic) double eosLikelihood;
@property (nonatomic, copy) NSArray *pauseCounts;
@property (nonatomic) long long processedAudioDurationInMilliseconds;
@property (nonatomic) double silencePosterior;
@property (nonatomic) long long trailingSilenceDuration;
@property (nonatomic) long long wordCount;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (double)eosLikelihood;
- (id)initWithCoder:(id)arg1;
- (id)pauseCounts;
- (long long)processedAudioDurationInMilliseconds;
- (void)setEosLikelihood:(double)arg1;
- (void)setPauseCounts:(id)arg1;
- (void)setProcessedAudioDurationInMilliseconds:(long long)arg1;
- (void)setSilencePosterior:(double)arg1;
- (void)setTrailingSilenceDuration:(long long)arg1;
- (void)setWordCount:(long long)arg1;
- (double)silencePosterior;
- (long long)trailingSilenceDuration;
- (long long)wordCount;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)featuresForEndpointer:(id)arg1;

- (id)initWithResponse:(id)arg1;

@end

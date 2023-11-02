
@interface CSEnhancedEndpointerFeatures : NSObject {
    double  _clientSilenceFramesCount;
    double  _clientSilenceProbability;
    double  _endOfSentenceLikelihood;
    double  _rcEndOfSentenceLikelihood;
    double  _rcServerFeaturesLatency;
    long long  _rcTrailingSilenceDuration;
    long long  _rcWordCount;
    double  _serverFeaturesLatency;
    double  _silencePosterior;
    long long  _trailingSilenceDuration;
    long long  _wordCount;
}

@property (nonatomic, readonly) double clientSilenceFramesCount;
@property (nonatomic, readonly) double clientSilenceProbability;
@property (nonatomic, readonly) double endOfSentenceLikelihood;
@property (nonatomic, readonly) double rcEndOfSentenceLikelihood;
@property (nonatomic, readonly) double rcServerFeaturesLatency;
@property (nonatomic, readonly) long long rcTrailingSilenceDuration;
@property (nonatomic, readonly) long long rcWordCount;
@property (nonatomic, readonly) double serverFeaturesLatency;
@property (nonatomic, readonly) double silencePosterior;
@property (nonatomic, readonly) long long trailingSilenceDuration;
@property (nonatomic, readonly) long long wordCount;

- (double)clientSilenceFramesCount;
- (double)clientSilenceProbability;
- (id)description;
- (double)endOfSentenceLikelihood;
- (id)init;
- (id)initWithTrailingSilenceDuration:(long long)arg1 clientSilenceFramesCount:(double)arg2 endOfSentenceLikelihood:(double)arg3 wordCount:(long long)arg4 serverFeaturesLatency:(double)arg5 clientSilenceProbability:(double)arg6 rcTrailingSilenceDuration:(long long)arg7 rcEndOfSentenceLikelihood:(double)arg8 rcWordCount:(long long)arg9 rcServerFeaturesLatency:(double)arg10 silencePosterior:(double)arg11;
- (double)rcEndOfSentenceLikelihood;
- (double)rcServerFeaturesLatency;
- (long long)rcTrailingSilenceDuration;
- (long long)rcWordCount;
- (double)serverFeaturesLatency;
- (double)silencePosterior;
- (id)toFeatureArray;
- (long long)trailingSilenceDuration;
- (long long)wordCount;

@end


@interface ATXMagicalMomentsSignals : NSObject {
    long long  _anchorType;
    double  _confidence;
    long long  _pmmReason;
    unsigned long long  _predictionIndex;
    unsigned long long  _predictionSource;
    NSDictionary * _reasonMetadata;
}

@property (nonatomic, readonly) long long anchorType;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) long long pmmReason;
@property (nonatomic, readonly) unsigned long long predictionIndex;
@property (nonatomic, readonly) unsigned long long predictionSource;
@property (nonatomic, readonly) NSDictionary *reasonMetadata;

+ (unsigned long long)pmmReasonToATXSuggestionReason:(long long)arg1;

- (void).cxx_destruct;
- (long long)anchorType;
- (unsigned long long)atxReason;
- (double)confidence;
- (id)init;
- (id)initWithPredictionSource:(unsigned long long)arg1 pmmReason:(long long)arg2 reasonMetadata:(id)arg3 confidence:(double)arg4 anchorType:(long long)arg5 index:(unsigned long long)arg6;
- (long long)pmmReason;
- (unsigned long long)predictionIndex;
- (unsigned long long)predictionSource;
- (id)reasonMetadata;

@end

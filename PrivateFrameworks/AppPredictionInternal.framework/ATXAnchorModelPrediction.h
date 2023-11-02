
@interface ATXAnchorModelPrediction : NSObject <NSSecureCoding> {
    ATXDuetEvent * _anchorEvent;
    double  _anchorPopularity;
    NSString * _anchorType;
    <ATXAnchorModelCandidateClassifierProtocol> * _candidateClassifier;
    NSString * _candidateId;
    NSString * _candidateType;
    double  _classConditionalProbability;
    NSDateInterval * _dateIntervalForPrediction;
    double  _globalPopularity;
    unsigned long long  _numUniqueOccurrencesAfterAnchor;
    ATXAnchorModelPredictionOffsetFromAnchorOccurrence * _offsetFromAnchorToShowPrediction;
    double  _posteriorProbability;
    double  _score;
    double  _standardDeviationOfOffsetFromAnchor;
}

@property (nonatomic, readonly) ATXDuetEvent *anchorEvent;
@property (nonatomic, readonly) double anchorPopularity;
@property (nonatomic, readonly) NSString *anchorType;
@property (nonatomic, readonly) <ATXAnchorModelCandidateClassifierProtocol> *candidateClassifier;
@property (nonatomic, readonly) NSString *candidateId;
@property (nonatomic, readonly) NSString *candidateType;
@property (nonatomic, readonly) double classConditionalProbability;
@property (nonatomic, readonly) NSDateInterval *dateIntervalForPrediction;
@property (nonatomic, readonly) double globalPopularity;
@property (nonatomic, readonly) unsigned long long numUniqueOccurrencesAfterAnchor;
@property (nonatomic, readonly) ATXAnchorModelPredictionOffsetFromAnchorOccurrence *offsetFromAnchorToShowPrediction;
@property (nonatomic, readonly) double posteriorProbability;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) double standardDeviationOfOffsetFromAnchor;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorEvent;
- (double)anchorPopularity;
- (id)anchorType;
- (id)candidateClassifier;
- (id)candidateId;
- (id)candidateType;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededFordouble:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (double)classConditionalProbability;
- (id)dateIntervalForPrediction;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)globalPopularity;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAnchorType:(id)arg1 anchorEvent:(id)arg2 candidateType:(id)arg3 candidateId:(id)arg4 dateIntervalForPrediction:(id)arg5 score:(double)arg6 numUniqueOccurrencesAfterAnchor:(unsigned long long)arg7 posteriorProbability:(double)arg8 classConditionalProbability:(double)arg9 standardDeviationOfOffsetFromAnchor:(double)arg10 anchorPopularity:(double)arg11 globalPopularity:(double)arg12 offsetFromAnchorToShowPrediction:(id)arg13 candidateClassifier:(id)arg14;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)numUniqueOccurrencesAfterAnchor;
- (id)offsetFromAnchorToShowPrediction;
- (double)posteriorProbability;
- (double)score;
- (double)standardDeviationOfOffsetFromAnchor;

@end

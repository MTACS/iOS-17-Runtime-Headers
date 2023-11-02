
@interface ATXNaivePositiveAnchorModelCandidateClassifier : NSObject <ATXAnchorModelCandidateClassifierProtocol> {
    ATXAnchor * _anchor;
    NSString * _candidateId;
    NSString * _candidateType;
    bool  _isTrained;
}

@property (nonatomic, readonly) ATXAnchor *anchor;
@property (nonatomic, readonly) NSString *candidateId;
@property (nonatomic, readonly) NSString *candidateType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTrained;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (id)candidateId;
- (id)candidateType;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (long long)classifierType;
- (id)classifyCandidateForAnchorOccurrence:(id)arg1 trainingResult:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidateId:(id)arg1 candidateType:(id)arg2 anchor:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTrained;
- (void)setIsTrained:(bool)arg1;
- (void)train;

@end

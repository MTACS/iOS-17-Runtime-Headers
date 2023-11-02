
@interface IRCandidateInspectionGenerator : NSObject {
    IRCandidate * _candidate;
    NSDictionary * _candidateSelectorReasons;
    long long  _classification;
    NSString * _classificationDescription;
    bool  _sameSpaceBasedOnBLE;
    bool  _sameSpaceBasedOnMiLo;
    bool  _sameSpaceBasedOnUWB;
}

@property (nonatomic, readonly) IRCandidate *candidate;
@property (nonatomic, readonly) NSDictionary *candidateSelectorReasons;
@property (nonatomic, readonly) long long classification;
@property (nonatomic, readonly) NSString *classificationDescription;
@property (nonatomic) bool sameSpaceBasedOnBLE;
@property (nonatomic) bool sameSpaceBasedOnMiLo;
@property (nonatomic) bool sameSpaceBasedOnUWB;

- (void).cxx_destruct;
- (id)candidate;
- (id)candidateSelectorReasons;
- (long long)classification;
- (id)classificationDescription;
- (id)exportCandidateInspectionAsDictionary;
- (id)initClassification:(long long)arg1 andClassificationDescription:(id)arg2 forCandidate:(id)arg3;
- (id)initWithClassification:(long long)arg1 ClassificationDescription:(id)arg2 sameSpaceBasedOnMiLo:(bool)arg3 sameSpaceBasedOnUWB:(bool)arg4 sameSpaceBasedOnBLE:(bool)arg5 candidateSelectorReasons:(id)arg6 forCandidate:(id)arg7;
- (bool)sameSpaceBasedOnBLE;
- (bool)sameSpaceBasedOnMiLo;
- (bool)sameSpaceBasedOnUWB;
- (void)setSameSpaceBasedOnBLE:(bool)arg1;
- (void)setSameSpaceBasedOnMiLo:(bool)arg1;
- (void)setSameSpaceBasedOnUWB:(bool)arg1;

@end

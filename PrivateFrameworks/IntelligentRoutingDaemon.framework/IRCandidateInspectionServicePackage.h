
@interface IRCandidateInspectionServicePackage : NSObject {
    IRCandidate * _candidate;
    long long  _classification;
    NSString * _classificationDescription;
    IRInspectionOrderOfExectionForCandidate * _orderOfExecution;
    NSArray * _rules;
}

@property (nonatomic, readonly) IRCandidate *candidate;
@property (nonatomic, readonly) long long classification;
@property (nonatomic, readonly) NSString *classificationDescription;
@property (nonatomic, readonly) IRInspectionOrderOfExectionForCandidate *orderOfExecution;
@property (nonatomic, readonly) NSArray *rules;

- (void).cxx_destruct;
- (id)candidate;
- (long long)classification;
- (id)classificationDescription;
- (id)exportCandidateInspectionAsDictionary;
- (id)initWithRules:(id)arg1 classification:(long long)arg2 orderOfExecution:(id)arg3 andClassificationDescription:(id)arg4 forCandidate:(id)arg5;
- (id)orderOfExecution;
- (id)rules;

@end

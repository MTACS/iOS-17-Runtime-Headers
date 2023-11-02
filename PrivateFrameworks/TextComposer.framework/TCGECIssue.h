
@interface TCGECIssue : NSObject {
    float  _confidence;
    NSString * _correction;
    unsigned long long  _issueType;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) NSString *correction;
@property (nonatomic, readonly) unsigned long long issueType;

- (void).cxx_destruct;
- (float)confidence;
- (id)correction;
- (id)initWithCorrection:(id)arg1 andConfidence:(float)arg2 forIssueType:(unsigned long long)arg3;
- (unsigned long long)issueType;

@end


@interface PFUbiquityPeerSnapshot : NSObject {
    NSMutableDictionary * _diffFromPrevious;
    NSString * _exportingPeerID;
    PFUbiquityKnowledgeVector * _kv;
    NSDictionary * _logSnapshot;
    NSDate * _transactionDate;
    NSNumber * _transactionNumber;
}

- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithExportingPeerID:(id)arg1 logSnapshot:(id)arg2 transactionNumber:(id)arg3 transactionDate:(id)arg4 andKnowledgeVector:(id)arg5;
- (id)initWithTranasctionEntry:(id)arg1 andLogSnapshot:(id)arg2;
- (bool)isEqual:(id)arg1;

@end


@interface IDSGFTMetricsAnonymizer : NSObject {
    NSMutableDictionary * _assignedIDs;
    unsigned long long  _nextAnonymizedID;
}

- (void).cxx_destruct;
- (id)anonymizeID:(id)arg1;
- (id)init;

@end

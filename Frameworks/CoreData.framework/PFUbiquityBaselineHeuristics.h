
@interface PFUbiquityBaselineHeuristics : NSObject <NSCopying> {
    PFUbiquityKnowledgeVector * _currentBaselineKV;
    PFUbiquityKnowledgeVector * _currentKV;
    NSString * _localPeerID;
    long long  _logSize;
    long double _logToStoreSizeRatio;
    long long  _minLogBytes;
    NSString * _modelVersionHash;
    long long  _numRequiredTransactions;
    NSString * _storeName;
    long long  _storeSize;
    PFUbiquityLocation * _ubiquityRootLocation;
}

- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;

@end


@interface MTRBasicInformationClusterCapabilityMinimaStruct : NSObject <NSCopying> {
    NSNumber * _caseSessionsPerFabric;
    NSNumber * _subscriptionsPerFabric;
}

@property (nonatomic, copy) NSNumber *caseSessionsPerFabric;
@property (nonatomic, copy) NSNumber *subscriptionsPerFabric;

- (void).cxx_destruct;
- (id)caseSessionsPerFabric;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (void)setCaseSessionsPerFabric:(id)arg1;
- (void)setSubscriptionsPerFabric:(id)arg1;
- (id)subscriptionsPerFabric;

@end

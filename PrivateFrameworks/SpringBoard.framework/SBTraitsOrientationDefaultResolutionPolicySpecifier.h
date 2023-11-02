
@interface SBTraitsOrientationDefaultResolutionPolicySpecifier : SBTraitsOrientationStageComponent <TRAPreferencesStageResolutionPolicySpecifying> {
    <SBTraitsOrientationPolicySpecifierDataSource> * _dataSource;
}

@property (nonatomic, readonly) NSNumber *componentOrder;
@property (nonatomic) <SBTraitsOrientationPolicySpecifierDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)initWithComponentOrder:(id)arg1 dataSource:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)updateStageParticipantsResolutionPolicies:(id)arg1 context:(id)arg2;

@end

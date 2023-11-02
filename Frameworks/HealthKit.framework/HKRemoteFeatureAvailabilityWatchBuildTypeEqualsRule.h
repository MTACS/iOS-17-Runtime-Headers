
@interface HKRemoteFeatureAvailabilityWatchBuildTypeEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {
    NSString * _buildType;
}

@property (nonatomic, retain) NSString *buildType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (id)buildType;
- (bool)evaluate;
- (void)processUserInfo:(id)arg1;
- (void)setBuildType:(id)arg1;

@end

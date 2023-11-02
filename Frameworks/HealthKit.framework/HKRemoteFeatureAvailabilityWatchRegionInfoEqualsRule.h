
@interface HKRemoteFeatureAvailabilityWatchRegionInfoEqualsRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {
    NSString * _regionInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *regionInfo;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (bool)evaluate;
- (void)processUserInfo:(id)arg1;
- (id)regionInfo;
- (void)setRegionInfo:(id)arg1;

@end

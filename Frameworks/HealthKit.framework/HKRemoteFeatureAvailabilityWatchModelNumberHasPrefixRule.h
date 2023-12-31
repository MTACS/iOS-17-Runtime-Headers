
@interface HKRemoteFeatureAvailabilityWatchModelNumberHasPrefixRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule> {
    NSString * _modelNumberPrefix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *modelNumberPrefix;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;

- (void).cxx_destruct;
- (bool)evaluate;
- (id)modelNumberPrefix;
- (void)processUserInfo:(id)arg1;
- (void)setModelNumberPrefix:(id)arg1;

@end

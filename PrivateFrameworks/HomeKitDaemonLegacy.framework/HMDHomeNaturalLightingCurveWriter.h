
@interface HMDHomeNaturalLightingCurveWriter : HMFObject <HMFLogging> {
    <HMDLightProfileDataSource> * _dataSource;
    HMDHome * _home;
}

@property (readonly) <HMDLightProfileDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)dataSource;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 dataSource:(id)arg2;
- (id)logIdentifier;
- (void)setNaturalLightingEnabled:(bool)arg1 forLightProfiles:(id)arg2 completion:(id /* block */)arg3;

@end

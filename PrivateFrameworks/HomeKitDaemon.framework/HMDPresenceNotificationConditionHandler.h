
@interface HMDPresenceNotificationConditionHandler : HMFObject <HMDNotificationConditionHandler, HMFLogging> {
    <HMDFeaturesDataSource> * _featuresDataSource;
    HMDHome * _home;
    <HMDPresenceNotificationConditionPresenceProvider> * _presenceProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <HMDFeaturesDataSource> *featuresDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHome *home;
@property (readonly) <HMDPresenceNotificationConditionPresenceProvider> *presenceProvider;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)canHandleCondition:(id)arg1;
- (bool)conditionPasses:(id)arg1 registrationUser:(id)arg2;
- (id)featuresDataSource;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 presenceProvider:(id)arg2 featuresDataSource:(id)arg3;
- (id)presenceProvider;

@end

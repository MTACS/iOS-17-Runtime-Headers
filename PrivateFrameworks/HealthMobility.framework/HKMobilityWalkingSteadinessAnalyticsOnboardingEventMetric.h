
@interface HKMobilityWalkingSteadinessAnalyticsOnboardingEventMetric : NSObject <HKMobilityAnalyticsEventMetric> {
    NSNumber * _acceptDefaultHeight;
    NSNumber * _acceptDefaultNotifications;
    NSNumber * _acceptDefaultWeight;
    NSString * _activeWatchProductType;
    NSNumber * _age;
    NSNumber * _biologicalSex;
    NSString * _featureVersion;
    NSNumber * _hasDefaultHeight;
    NSNumber * _hasDefaultWeight;
    bool  _improveHealthAndActivityAllowed;
    NSString * _provenance;
    NSString * _step;
}

@property (nonatomic, retain) NSNumber *acceptDefaultHeight;
@property (nonatomic, retain) NSNumber *acceptDefaultNotifications;
@property (nonatomic, retain) NSNumber *acceptDefaultWeight;
@property (nonatomic, copy) NSString *activeWatchProductType;
@property (nonatomic, retain) NSNumber *age;
@property (nonatomic, retain) NSNumber *biologicalSex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *featureVersion;
@property (nonatomic, retain) NSNumber *hasDefaultHeight;
@property (nonatomic, retain) NSNumber *hasDefaultWeight;
@property (readonly) unsigned long long hash;
@property (getter=isImproveHealthAndActivityAllowed, nonatomic) bool improveHealthAndActivityAllowed;
@property (nonatomic, copy) NSString *provenance;
@property (nonatomic, copy) NSString *step;
@property (readonly) Class superclass;

+ (bool)requiresImproveHealthAndActivityAllowed;

- (void).cxx_destruct;
- (id)acceptDefaultHeight;
- (id)acceptDefaultNotifications;
- (id)acceptDefaultWeight;
- (id)activeWatchProductType;
- (id)age;
- (id)biologicalSex;
- (id)eventName;
- (id)eventPayload;
- (id)featureVersion;
- (id)hasDefaultHeight;
- (id)hasDefaultWeight;
- (id)initWithImproveHealthAndActivityAllowed:(bool)arg1;
- (bool)isImproveHealthAndActivityAllowed;
- (id)provenance;
- (void)setAcceptDefaultHeight:(id)arg1;
- (void)setAcceptDefaultNotifications:(id)arg1;
- (void)setAcceptDefaultWeight:(id)arg1;
- (void)setActiveWatchProductType:(id)arg1;
- (void)setAge:(id)arg1;
- (void)setBiologicalSex:(id)arg1;
- (void)setFeatureVersion:(id)arg1;
- (void)setHasDefaultHeight:(id)arg1;
- (void)setHasDefaultWeight:(id)arg1;
- (void)setImproveHealthAndActivityAllowed:(bool)arg1;
- (void)setProvenance:(id)arg1;
- (void)setStep:(id)arg1;
- (id)step;

@end

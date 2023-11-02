
@interface HDHearingProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider, HDProfileExtension> {
    HDAudioAnalyticsManager * _analyticsManager;
    HDHeadphoneDoseManager * _headphoneDoseManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDHeadphoneDoseManager *headphoneDoseManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (id)headphoneDoseManager;
- (id)initWithProfile:(id)arg1;

@end

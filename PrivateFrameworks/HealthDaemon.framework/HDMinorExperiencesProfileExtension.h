
@interface HDMinorExperiencesProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider> {
    NSArray * _minorExperiences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (id)initWithProfile:(id)arg1;

@end


@interface HDSHProfileExtension : NSObject <HDFeatureAvailabilityExtensionProvider, HDProfileExtension> {
    HDSHAccessibilityAssertionManager * _accessibilityAssertionManager;
    HDProfile * _profile;
    HDSHWidgetSchedulingManager * _widgetSchedulingManager;
}

@property (nonatomic, readonly) HDSHAccessibilityAssertionManager *accessibilityAssertionManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HDSHWidgetSchedulingManager *widgetSchedulingManager;

- (void).cxx_destruct;
- (id)accessibilityAssertionManager;
- (id)featureAvailabilityExtensionForFeatureIdentifier:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)profile;
- (id)widgetSchedulingManager;

@end

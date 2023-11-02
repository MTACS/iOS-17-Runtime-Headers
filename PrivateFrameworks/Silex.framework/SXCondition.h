
@interface SXCondition : SXJSONObject <SXCondition>

@property (nonatomic, readonly) NSString *app;
@property (nonatomic, readonly) NSString *configurationKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) unsigned long long maxColumns;
@property (nonatomic, readonly) NSString *maxContentSizeCategory;
@property (nonatomic, readonly) NSString *maxSpecVersion;
@property (nonatomic, readonly) double maxViewportAspectRatio;
@property (nonatomic, readonly) double maxViewportWidth;
@property (nonatomic, readonly) unsigned long long minColumns;
@property (nonatomic, readonly) NSString *minContentSizeCategory;
@property (nonatomic, readonly) NSString *minSpecVersion;
@property (nonatomic, readonly) double minViewportAspectRatio;
@property (nonatomic, readonly) double minViewportWidth;
@property (nonatomic, readonly) unsigned long long newsletterSubscriptionStatus;
@property (nonatomic, readonly) long long offerUpsellScenario;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) unsigned long long preferredColorScheme;
@property (nonatomic, readonly) long long subscriptionActivationEligibility;
@property (nonatomic, readonly) NSString *subscriptionStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long testing;
@property (nonatomic, readonly) NSSet *types;
@property (nonatomic, readonly) long long verticalSizeClass;
@property (nonatomic, readonly) NSString *viewLocation;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;

- (id)contentSizeCategoryFromJSONContentSizeCategory:(id)arg1;
- (long long)horizontalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (long long)interfaceSizeClassFromJSONSizeClass:(id)arg1;
- (id)maxContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (double)maxViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (double)maxViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (id)minContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (double)minViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (double)minViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)newsletterSubscriptionStatusWithValue:(id)arg1 withType:(int)arg2;
- (long long)offerUpsellScenarioWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)preferredColorSchemeWithValue:(id)arg1 withType:(int)arg2;
- (long long)subscriptionActivationEligibilityWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)testingWithValue:(id)arg1 withType:(int)arg2;
- (id)types;
- (long long)verticalSizeClassWithValue:(id)arg1 withType:(int)arg2;

@end

@interface SXConditionHints : SXJSONObject <SXConditionHints>

@property (nonatomic, readonly) long long app;
@property (nonatomic, readonly) long long configurationKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long horizontalSizeClass;
@property (nonatomic, readonly) long long maxColumns;
@property (nonatomic, readonly) long long maxContentSizeCategory;
@property (nonatomic, readonly) long long maxSpecVersion;
@property (nonatomic, readonly) long long maxViewportAspectRatio;
@property (nonatomic, readonly) long long maxViewportWidth;
@property (nonatomic, readonly) long long minColumns;
@property (nonatomic, readonly) long long minContentSizeCategory;
@property (nonatomic, readonly) long long minSpecVersion;
@property (nonatomic, readonly) long long minViewportAspectRatio;
@property (nonatomic, readonly) long long minViewportWidth;
@property (nonatomic, readonly) long long newsletter;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) long long preferredColorScheme;
@property (nonatomic, readonly) long long subscriptionActivationEligibility;
@property (nonatomic, readonly) long long subscriptionStatus;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long testing;
@property (nonatomic, readonly) long long upsellScenario;
@property (nonatomic, readonly) long long verticalSizeClass;
@property (nonatomic, readonly) long long viewLocation;

+ (id)jsonPropertyNameForObjCPropertyName:(id)arg1;

- (long long)appWithValue:(id)arg1 withType:(int)arg2;
- (long long)configurationKeyWithValue:(id)arg1 withType:(int)arg2;
- (long long)horizontalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (long long)maxColumnsWithValue:(id)arg1 withType:(int)arg2;
- (long long)maxContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (long long)maxSpecVersionWithValue:(id)arg1 withType:(int)arg2;
- (long long)maxViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (long long)maxViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (long long)minColumnsWithValue:(id)arg1 withType:(int)arg2;
- (long long)minContentSizeCategoryWithValue:(id)arg1 withType:(int)arg2;
- (long long)minSpecVersionWithValue:(id)arg1 withType:(int)arg2;
- (long long)minViewportAspectRatioWithValue:(id)arg1 withType:(int)arg2;
- (long long)minViewportWidthWithValue:(id)arg1 withType:(int)arg2;
- (long long)newsletterWithValue:(id)arg1 withType:(int)arg2;
- (long long)platformWithValue:(id)arg1 withType:(int)arg2;
- (long long)preferredColorSchemeWithValue:(id)arg1 withType:(int)arg2;
- (long long)subscriptionActivationEligibilityWithValue:(id)arg1 withType:(int)arg2;
- (long long)subscriptionStatusWithValue:(id)arg1 withType:(int)arg2;
- (long long)ternaryValueForJSONValue:(id)arg1 type:(int)arg2;
- (long long)testingWithValue:(id)arg1 withType:(int)arg2;
- (long long)upsellScenarioWithValue:(id)arg1 withType:(int)arg2;
- (long long)verticalSizeClassWithValue:(id)arg1 withType:(int)arg2;
- (long long)viewLocationWithValue:(id)arg1 withType:(int)arg2;

@end

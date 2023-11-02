
@protocol UIMutableTraits <NSObject>

@required

- (long long)accessibilityContrast;
- (long long)activeAppearance;
- (long long)displayGamut;
- (double)displayScale;
- (long long)forceTouchCapability;
- (long long)horizontalSizeClass;
- (long long)imageDynamicRange;
- (long long)layoutDirection;
- (long long)legibilityWeight;
- (<NSObject> *)objectForTrait:(Class)arg1;
- (NSString *)preferredContentSizeCategory;
- (long long)sceneCaptureState;
- (void)setAccessibilityContrast:(long long)arg1;
- (void)setActiveAppearance:(long long)arg1;
- (void)setCGFloatValue:(double)arg1 forTrait:(Class)arg2;
- (void)setDisplayGamut:(long long)arg1;
- (void)setDisplayScale:(double)arg1;
- (void)setForceTouchCapability:(long long)arg1;
- (void)setHorizontalSizeClass:(long long)arg1;
- (void)setImageDynamicRange:(long long)arg1;
- (void)setLayoutDirection:(long long)arg1;
- (void)setLegibilityWeight:(long long)arg1;
- (void)setNSIntegerValue:(long long)arg1 forTrait:(Class)arg2;
- (void)setObject:(id <NSObject>)arg1 forTrait:(Class)arg2;
- (void)setPreferredContentSizeCategory:(NSString *)arg1;
- (void)setSceneCaptureState:(long long)arg1;
- (void)setToolbarItemPresentationSize:(long long)arg1;
- (void)setTypesettingLanguage:(NSString *)arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (void)setUserInterfaceLevel:(long long)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)setVerticalSizeClass:(long long)arg1;
- (long long)toolbarItemPresentationSize;
- (NSString *)typesettingLanguage;
- (long long)userInterfaceIdiom;
- (long long)userInterfaceLevel;
- (long long)userInterfaceStyle;
- (double)valueForCGFloatTrait:(Class)arg1;
- (long long)valueForNSIntegerTrait:(Class)arg1;
- (long long)verticalSizeClass;

@end


@interface SAUISnippetDisplayConfigurationResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic) bool accessibilityDifferentiateWithoutColor;
@property (nonatomic) bool accessibilityInvertColors;
@property (nonatomic) bool accessibilityReduceMotion;
@property (nonatomic) bool accessibilityReduceTransparency;
@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayColorScheme;
@property (nonatomic, copy) NSString *displayContrast;
@property (nonatomic, copy) NSString *displayGamut;
@property (nonatomic, copy) NSString *dynamicTypeSize;
@property (nonatomic, retain) SAUISize *estimatedVisibleSnippetDisplaySize;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textDirection;
@property (nonatomic, copy) NSString *textLegibilityWeight;

- (bool)accessibilityDifferentiateWithoutColor;
- (bool)accessibilityInvertColors;
- (bool)accessibilityReduceMotion;
- (bool)accessibilityReduceTransparency;
- (id)displayColorScheme;
- (id)displayContrast;
- (id)displayGamut;
- (id)dynamicTypeSize;
- (id)encodedClassName;
- (id)estimatedVisibleSnippetDisplaySize;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAccessibilityDifferentiateWithoutColor:(bool)arg1;
- (void)setAccessibilityInvertColors:(bool)arg1;
- (void)setAccessibilityReduceMotion:(bool)arg1;
- (void)setAccessibilityReduceTransparency:(bool)arg1;
- (void)setDisplayColorScheme:(id)arg1;
- (void)setDisplayContrast:(id)arg1;
- (void)setDisplayGamut:(id)arg1;
- (void)setDynamicTypeSize:(id)arg1;
- (void)setEstimatedVisibleSnippetDisplaySize:(id)arg1;
- (void)setTextDirection:(id)arg1;
- (void)setTextLegibilityWeight:(id)arg1;
- (id)textDirection;
- (id)textLegibilityWeight;

@end

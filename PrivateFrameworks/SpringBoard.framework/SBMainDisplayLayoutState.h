
@interface SBMainDisplayLayoutState : SBLayoutState {
    NSString * _bundleIDShowingAppExpose;
    SBAppLayout * _cachedAppLayoutIfAny;
    SBAppLayout * _cachedFloatingAppLayoutIfAny;
    long long  _centerConfiguration;
    bool  _centerEntityModal;
    NSString * _continuousExposeIdentifier;
    long long  _displayOrdinal;
    NSDictionary * _elementIdentifiersToLayoutAttributes;
    long long  _floatingConfiguration;
    bool  _floatingSwitcherVisible;
    bool  _isDisplayExternal;
    long long  _peekConfiguration;
    long long  _spaceConfiguration;
    long long  _unlockedEnvironmentMode;
    long long  _windowPickerRole;
}

@property (nonatomic, readonly) NSString *bundleIDShowingAppExpose;
@property (nonatomic, readonly) long long centerConfiguration;
@property (getter=isCenterEntityModal, nonatomic, readonly) bool centerEntityModal;
@property (nonatomic, readonly, copy) NSString *continuousExposeIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *displayItemLayoutAttributesMap;
@property (nonatomic, readonly) long long displayOrdinal;
@property (nonatomic, readonly) bool effectivelyRepresentsHomeScreen;
@property (nonatomic, readonly, copy) NSDictionary *elementIdentifiersToLayoutAttributes;
@property (nonatomic, readonly) long long floatingConfiguration;
@property (getter=isFloatingSwitcherVisible, nonatomic, readonly) bool floatingSwitcherVisible;
@property (nonatomic, readonly) bool isDisplayExternal;
@property (nonatomic, readonly) bool isFullScreen;
@property (nonatomic, readonly) bool isSplitView;
@property (nonatomic, readonly) long long peekConfiguration;
@property (nonatomic, readonly) long long spaceConfiguration;
@property (nonatomic, readonly) long long unlockedEnvironmentMode;
@property (nonatomic, readonly) long long windowPickerRole;

+ (id)_elementIdentifiersToLayoutAttributesForElements:(id)arg1 spaceConfiguration:(long long)arg2;

- (void).cxx_destruct;
- (void)_applyElementInterfaceOrientationsToLayoutAttributes;
- (long long)_defaultInterfaceOrientation;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 interfaceOrientationByLayoutElement:(id)arg3;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 interfaceOrientationByLayoutElement:(id)arg3 spaceConfiguration:(long long)arg4 elementIdentifiersToLayoutAttributes:(id)arg5 floatingConfiguration:(long long)arg6 unlockedEnvironmentMode:(long long)arg7 floatingSwitcherVisible:(bool)arg8 centerConfiguration:(long long)arg9 centerEntityModal:(bool)arg10 peekConfiguration:(long long)arg11 bundleIDShowingAppExpose:(id)arg12 windowPickerRole:(long long)arg13 displayOrdinal:(long long)arg14 isDisplayExternal:(bool)arg15;
- (id)_initWithLayoutElements:(id)arg1 interfaceOrientation:(long long)arg2 interfaceOrientationByLayoutElement:(id)arg3 spaceConfiguration:(long long)arg4 floatingConfiguration:(long long)arg5 unlockedEnvironmentMode:(long long)arg6 floatingSwitcherVisible:(bool)arg7 centerConfiguration:(long long)arg8 centerEntityModal:(bool)arg9 peekConfiguration:(long long)arg10 bundleIDShowingAppExpose:(id)arg11 windowPickerRole:(long long)arg12 displayOrdinal:(long long)arg13 isDisplayExternal:(bool)arg14;
- (id)_initWithLayoutElements:(id)arg1 spaceConfiguration:(long long)arg2 elementIdentifiersToLayoutAttributes:(id)arg3 floatingConfiguration:(long long)arg4 unlockedEnvironmentMode:(long long)arg5 floatingSwitcherVisible:(bool)arg6 centerConfiguration:(long long)arg7 centerEntityModal:(bool)arg8 peekConfiguration:(long long)arg9 bundleIDShowingAppExpose:(id)arg10 windowPickerRole:(long long)arg11 displayOrdinal:(long long)arg12 isDisplayExternal:(bool)arg13;
- (id)_initWithLayoutElements:(id)arg1 spaceConfiguration:(long long)arg2 floatingConfiguration:(long long)arg3 unlockedEnvironmentMode:(long long)arg4 floatingSwitcherVisible:(bool)arg5 centerConfiguration:(long long)arg6 centerEntityModal:(bool)arg7 peekConfiguration:(long long)arg8 bundleIDShowingAppExpose:(id)arg9 windowPickerRole:(long long)arg10 displayOrdinal:(long long)arg11 isDisplayExternal:(bool)arg12;
- (id)_initWithLayoutState:(id)arg1;
- (id)_layoutAttributesForElementWithIdentifier:(id)arg1;
- (void)_setLayoutAttributes:(id)arg1 forLayoutElement:(id)arg2;
- (void)_updateSizingPoliciesForLayoutElements:(id)arg1;
- (id)appLayout;
- (id)bundleIDShowingAppExpose;
- (long long)centerConfiguration;
- (id)continuousExposeIdentifier;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)displayItemLayoutAttributesMap;
- (long long)displayOrdinal;
- (bool)effectivelyRepresentsHomeScreen;
- (id)elementIdentifiersToLayoutAttributes;
- (id)floatingAppLayout;
- (long long)floatingConfiguration;
- (unsigned long long)hash;
- (void)invalidateAppLayout;
- (void)invalidateFloatingAppLayout;
- (bool)isCenterEntityModal;
- (bool)isDisplayExternal;
- (bool)isEqual:(id)arg1;
- (bool)isFloatingSwitcherVisible;
- (bool)isFullScreen;
- (bool)isSplitView;
- (id)layoutAttributesForElement:(id)arg1;
- (long long)peekConfiguration;
- (void)setInterfaceOrientationByLayoutElementIdentifier:(id)arg1;
- (long long)spaceConfiguration;
- (long long)unlockedEnvironmentMode;
- (long long)windowPickerRole;

@end


@interface UIWindowSceneActivationRequestOptions : UISceneActivationRequestOptions <NSCopying> {
    NSString * __interactionIdentifier;
    unsigned long long  __preferredSizeCategory;
    bool  __preserveLayout;
    UIWindowScenePlacement * _placement;
    unsigned long long  _preferredPresentationStyle;
    UISceneConfiguration * _quickLookSceneConfiguration;
}

@property (nonatomic, readonly) bool _effectivelyWantsBackground;
@property (nonatomic, readonly) bool _effectivelyWantsFullscreen;
@property (nonatomic, readonly) bool _effectivelyWantsPreservedLayout;
@property (nonatomic, readonly) bool _effectivelyWantsProminence;
@property (setter=_setInteractionIdentifier:, nonatomic, copy) NSString *_interactionIdentifier;
@property (setter=_setPlacement:, nonatomic, copy) _UIWindowScenePlacement *_placement;
@property (setter=_setPreferredSizeCategory:, nonatomic) unsigned long long _preferredSizeCategory;
@property (setter=_setPreserveLayout:, nonatomic) bool _preserveLayout;
@property (setter=_setQuickLookSceneConfiguration:, nonatomic, retain) UISceneConfiguration *_quickLookSceneConfiguration;
@property (nonatomic, copy) UIWindowScenePlacement *placement;
@property (nonatomic) unsigned long long preferredPresentationStyle;

- (void).cxx_destruct;
- (bool)_effectivelyWantsBackground;
- (bool)_effectivelyWantsFullscreen;
- (bool)_effectivelyWantsPreservedLayout;
- (bool)_effectivelyWantsProminence;
- (id)_interactionIdentifier;
- (id)_placement;
- (unsigned long long)_preferredSizeCategory;
- (bool)_preserveLayout;
- (id)_quickLookSceneConfiguration;
- (void)_setInteractionIdentifier:(id)arg1;
- (void)_setPlacement:(id)arg1;
- (void)_setPreferredSizeCategory:(unsigned long long)arg1;
- (void)_setPreserveLayout:(bool)arg1;
- (void)_setQuickLookSceneConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)placement;
- (unsigned long long)preferredPresentationStyle;
- (void)setPlacement:(id)arg1;
- (void)setPreferredPresentationStyle:(unsigned long long)arg1;

@end

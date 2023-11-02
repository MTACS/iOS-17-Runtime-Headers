
@interface SFCapsuleNavigationBarTheme : _SFBarTheme <SFUnifiedTabBarItemTitleThemeProviding> {
    _SFBarTheme * _backgroundTheme;
    bool  _hidesOverlayEffects;
}

@property (nonatomic, readonly) SFUnifiedTabBarItemTitleContainerViewTheme *activeTabTitleTheme;
@property (nonatomic, retain) _SFBarTheme *backgroundTheme;
@property (nonatomic, readonly) _SFBarTheme *contentTheme;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hidesOverlayEffects;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SFUnifiedTabBarItemTitleContainerViewTheme *tabTitleTheme;
@property (nonatomic, readonly) SFUnifiedTabBarItemTitleContainerViewTheme *titleTheme;

+ (id)backdropEffectForStyle:(long long)arg1;
+ (bool)backdropIsDarkForStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_titleThemeIsMinimized:(bool)arg1;
- (void)applyBackdropEffectsToView:(id)arg1;
- (id)backgroundOverlayEffects;
- (id)backgroundTheme;
- (id)contentTheme;
- (bool)hidesOverlayEffects;
- (bool)isEqual:(id)arg1;
- (void)setBackgroundTheme:(id)arg1;
- (void)setHidesOverlayEffects:(bool)arg1;
- (id)tabTitleTheme;
- (id)titleTheme;

@end

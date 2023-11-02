
@interface _UIPointerSettings : PTSettings {
    _UIPointerSBAppIconEffectSettings * _SBAppIconEffectSettings;
    _UIBeamPointerSettings * _beamSettings;
    _UIButtonBehaviorSettings * _buttonSettings;
    _UIFreeformPointerSettings * _freeformPointerSettings;
    _UIPointerHighlightEffectSettings * _highlightEffectSettings;
    _UIPointerHoverEffectSettings * _hoverEffectSettings;
    _UIPointerLiftEffectSettings * _liftEffectSettings;
    _UILinkPointerSettings * _linkPointerSettings;
    _UINavigationAndToolbarBehaviorSettings * _navigationAndToolbarSettings;
    _UISearchBarBehaviorSettings * _searchBarSettings;
    bool  _showEffectPlatter;
    bool  _showRegions;
    _UIPointerEffectSizeRuleSettings * _sizeRuleSettings;
    _UITabBarBehaviorSettings * _tabBarSettings;
    _UIPointerTextBehaviorSettings * _textSettings;
}

@property (nonatomic, retain) _UIPointerSBAppIconEffectSettings *SBAppIconEffectSettings;
@property (nonatomic, retain) _UIBeamPointerSettings *beamSettings;
@property (nonatomic, retain) _UIButtonBehaviorSettings *buttonSettings;
@property (nonatomic, retain) _UIFreeformPointerSettings *freeformPointerSettings;
@property (nonatomic, retain) _UIPointerHighlightEffectSettings *highlightEffectSettings;
@property (nonatomic, retain) _UIPointerHoverEffectSettings *hoverEffectSettings;
@property (nonatomic, retain) _UIPointerLiftEffectSettings *liftEffectSettings;
@property (nonatomic, retain) _UILinkPointerSettings *linkPointerSettings;
@property (nonatomic, retain) _UINavigationAndToolbarBehaviorSettings *navigationAndToolbarSettings;
@property (nonatomic, retain) _UISearchBarBehaviorSettings *searchBarSettings;
@property (nonatomic) bool showEffectPlatter;
@property (nonatomic) bool showRegions;
@property (nonatomic, retain) _UIPointerEffectSizeRuleSettings *sizeRuleSettings;
@property (nonatomic, retain) _UITabBarBehaviorSettings *tabBarSettings;
@property (nonatomic, retain) _UIPointerTextBehaviorSettings *textSettings;

+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (id)SBAppIconEffectSettings;
- (id)beamSettings;
- (id)buttonSettings;
- (id)freeformPointerSettings;
- (id)highlightEffectSettings;
- (id)hoverEffectSettings;
- (id)liftEffectSettings;
- (id)linkPointerSettings;
- (id)navigationAndToolbarSettings;
- (id)searchBarSettings;
- (void)setBeamSettings:(id)arg1;
- (void)setButtonSettings:(id)arg1;
- (void)setDefaultValues;
- (void)setFreeformPointerSettings:(id)arg1;
- (void)setHighlightEffectSettings:(id)arg1;
- (void)setHoverEffectSettings:(id)arg1;
- (void)setLiftEffectSettings:(id)arg1;
- (void)setLinkPointerSettings:(id)arg1;
- (void)setNavigationAndToolbarSettings:(id)arg1;
- (void)setSBAppIconEffectSettings:(id)arg1;
- (void)setSearchBarSettings:(id)arg1;
- (void)setShowEffectPlatter:(bool)arg1;
- (void)setShowRegions:(bool)arg1;
- (void)setSizeRuleSettings:(id)arg1;
- (void)setTabBarSettings:(id)arg1;
- (void)setTextSettings:(id)arg1;
- (bool)showEffectPlatter;
- (bool)showRegions;
- (id)sizeRuleSettings;
- (id)tabBarSettings;
- (id)textSettings;

@end

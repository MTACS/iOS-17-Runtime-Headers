
@interface PDSlideChild : PDSlideBase {
    OADColorMap * mColorMapOverride;
    bool  mShowMasterPlaceholderAnimations;
    bool  mShowMasterShapes;
    OADThemeOverrides * mThemeOverrides;
}

- (void).cxx_destruct;
- (id)colorMap;
- (id)colorMapOverride;
- (id)colorScheme;
- (id)defaultTextListStyle;
- (id)description;
- (void)doneWithContent;
- (id)drawingTheme;
- (id)fontScheme;
- (id)init;
- (void)setColorMapOverride:(id)arg1;
- (void)setShowMasterPlaceholderAnimations:(bool)arg1;
- (void)setShowMasterShapes:(bool)arg1;
- (bool)showMasterPlaceholderAnimations;
- (bool)showMasterShapes;
- (id)styleMatrix;
- (id)themeOverrides;

@end

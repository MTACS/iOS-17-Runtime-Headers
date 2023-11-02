
@interface NTKBlackcombFaceView : NTKAnalogFaceView <CLKMonochromeFilterProvider> {
    UIView * _backgroundContainerView;
    NTKBlackcombBackgroundView * _backgroundView;
    NTKBlackcombColorPalette * _blackcombPalette;
    NTKFullscreenSubdialComplicationFactory * _complicationFactory;
    NTKInterpolatedColorPalette * _dialColorStyleTransitionPalette;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyComplicationTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (void)_applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 force:(bool)arg4;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (bool)_backgroundViewShouldUseLongSideTicks;
- (void)_cleanupAfterEditing;
- (long long)_complicationPickerStyleForSlot:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_configureTimeView:(id)arg1;
- (long long)_editMode;
- (void)_forceUpdateColors;
- (bool)_isBlackColor;
- (bool)_isComplicationSlotInsideDial:(id)arg1;
- (long long)_keylineStyleForComplicationSlot:(id)arg1;
- (id)_keylineViewForComplicationSlot:(id)arg1;
- (long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3;
- (id)_platterTextColorForEditMode:(long long)arg1 color:(id)arg2;
- (void)_prepareForEditing;
- (void)_prepareForSnapshotting;
- (void)_prepareForStatusChange:(bool)arg1;
- (void)_removeBackgroundView;
- (id)_renderBackgroundViewSwatchImageForBlackcombDialColor:(unsigned long long)arg1;
- (void)_reorderSwitcherSnapshotView;
- (id)_secondHandColor;
- (void)_setupBackgroundView;
- (id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3;
- (bool)_timeViewBehindContentForEditMode:(long long)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateHandsColors;
- (void)_updateTickLengths;
- (double)_verticalPaddingForStatusBar;
- (bool)_wantsStatusBarIconShadow;
- (id)createFaceColorPalette;
- (id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3;
- (void)layoutSubviews;
- (void)updateBlackcombDialColorStyle:(unsigned long long)arg1;
- (void)updateWithColorPalette:(id)arg1;

@end


@interface AXTripleClickHelpers : NSObject

+ (id)_allAvailableFeaturesIOS;
+ (id)_allAvailableFeaturesWatchOS;
+ (id)_availableFeatures;
+ (bool)_isAccessibilityAppIntentsProcess;
+ (void)_localToggleTripleClickOption:(int)arg1;
+ (bool)_localValueForTripleClickOption:(int)arg1;
+ (id)_npsKeyForTripleClickOption:(int)arg1;
+ (void)_npsSyncTripleClickOption:(int)arg1;
+ (void)_npsToggleTripleClickOption:(int)arg1;
+ (bool)_npsValueForTripleClickOption:(int)arg1;
+ (void)_promptToDisableBrightnessFilters:(id /* block */)arg1 data:(id)arg2;
+ (bool)_shouldShowFeatureInShortcutsControlCenterModule:(int)arg1 includeGuidedAccess:(bool)arg2;
+ (void)_toggleAssistiveTouch;
+ (void)_toggleClassicInvertColors;
+ (void)_toggleSmartInvertColorsOffMainThread;
+ (void)_toggleVoiceOver;
+ (id)allTripleClickOptions;
+ (id)allTripleClickOptionsForPlatform:(long long)arg1;
+ (void)attemptToEnterClarityBoard;
+ (void)attemptToPresentNearbyDeviceControlPicker;
+ (void)attemptToToggleTwiceRemoteScreen;
+ (id)domainAccessorForTripleClickOption:(int)arg1;
+ (id)localizationKeyForTripleClickOption:(int)arg1;
+ (id)titleForTripleClickOption:(int)arg1;
+ (void)toggleColorFilter;
+ (void)toggleFullKeyboardAccess;
+ (void)toggleGuidedAccessFromControlCenter;
+ (void)toggleHoverText;
+ (void)toggleLiveSpeech;
+ (void)toggleReduceWhitePoint;
+ (void)toggleTripleClickOption:(int)arg1;
+ (void)toggleTripleClickOption:(int)arg1 fromSource:(long long)arg2;
+ (void)toggleZoomOffMainThread;
+ (id)tripleClickOptionDidChangeNotification;
+ (id)tripleClickOptionsForAccessibilityShortcutControlCenterModuleIncludingGuidedAccess:(bool)arg1;
+ (bool)valueForTripleClickOption:(int)arg1;
+ (bool)valueForTripleClickOption:(int)arg1 fromSource:(long long)arg2;
+ (bool)valueForZoomTripleClickOption;

@end

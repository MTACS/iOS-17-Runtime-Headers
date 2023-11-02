
@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly) bool _isATVStyle;
@property (nonatomic, readonly) bool _isAutomaticStyle;
@property (nonatomic, readonly) _UIVisualEffectConfig *effectConfig;
@property (nonatomic, readonly) _UIBackdropViewSettings *effectSettings;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_effectCopyingFromCaptureGroup:(id)arg1;
+ (id)effectCombiningEffects:(id)arg1;
+ (id)effectCompositingColor:(id)arg1;
+ (id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingImage:(id)arg1;
+ (id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)emptyEffect;
+ (bool)supportsSecureCoding;

- (id)_allEffects;
- (void)_enumerateEffects:(id /* block */)arg1;
- (long long)_expectedUsage;
- (bool)_isATVStyle;
- (bool)_isAutomaticStyle;
- (bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (bool)_selectorOverridden:(SEL)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectConfig;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

+ (id)_gkGameLayerBackgroundVisualEffect;
+ (id)_gkGameLayerButtonVisualEffect;
+ (id)_gkGameLayerContentVibrancyEffect;
+ (id)_gkGameLayerDisabledButtonVisualEffect;
+ (id)_gkGameLayerModuleVisualEffect;
+ (id)_gkGameLayerPanelVisualEffect;
+ (id)_gkGameLayerPopOverVisualEffect;
+ (id)colorEffectBlendNormal:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_categoryDashboardBackgroundEffects;
+ (id)hu_dashboardBarEffects;
+ (id)hu_gridCellBackgroundOffEffects;
+ (id)hu_gridCellBackgroundOnEffects;

// Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed

+ (id)ne_visualEffectsForDailyBriefing;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

+ (id)sessionColorDark;
+ (id)sessionColorLight;

// Image: /System/Library/PrivateFrameworks/StocksUI.framework/StocksUI

+ (id)su_visualEffectsForBarWithBackgroundColor:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

+ (id)ts_blurEffectWithNewBarStyle;
+ (id)ts_sideBarEffect;
+ (id)ts_sideBarSelectionEffect;
+ (id)ts_visualEffectsForBarWithBackgroundColor:(id)arg1;
+ (id)ts_visualEffectsForBlackBackgroundBarAppearance;
+ (id)ts_visualEffectsForWhiteBackgroundBarAppearance;

@end

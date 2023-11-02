
@interface UIVisualEffectView : UIView <NSSecureCoding> {
    _UIVisualEffectViewCornerMask * __cornerMask;
    NSArray * _backgroundEffects;
    _UIVisualEffectHost * _backgroundHost;
    NSMutableArray * _captureDependents;
    _UIVisualEffectViewBackdropCaptureGroup * _captureGroup;
    UIVisualEffectView * _captureSource;
    NSArray * _contentEffects;
    _UIVisualEffectHost * _contentHost;
    UIVisualEffect * _effect;
    struct { 
        unsigned int backgroundHostNeedsUpdate : 1; 
        unsigned int contentHostNeedsUpdate : 1; 
        unsigned int allowsDithering : 1; 
        unsigned int allowsBlurring : 1; 
        unsigned int allowsGroupFiltering : 1; 
        unsigned int useReducedTransparencyForContentHost : 1; 
        unsigned int isUpdatingSubviews : 1; 
        unsigned int hasBackdropBackgroundColorAlpha : 1; 
        unsigned int allowsTransparentBlurring : 1; 
    }  _effectViewFlags;
    _UIVisualEffectEnvironment * _environment;
    UIImage * _maskImage;
    UIView * _maskView;
    bool  _useLiveMasking;
}

@property (setter=_setAllowsGroupFiltering:, nonatomic) bool _allowsGroupFiltering;
@property (nonatomic, readonly) bool _applyCornerMaskToSelf;
@property (setter=_setBackdropViewBackgroundColorAlpha:, nonatomic) double _backdropViewBackgroundColorAlpha;
@property (setter=_setCaptureDependents:, nonatomic, copy) NSArray *_captureDependents;
@property (nonatomic, readonly) _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
@property (nonatomic, readonly) UIVisualEffectView *_captureSource;
@property (setter=_setCaptureView:, nonatomic) _UIVisualEffectBackdropView *_captureView;
@property (setter=_setCornerMask:, nonatomic, retain) _UIVisualEffectViewCornerMask *_cornerMask;
@property (setter=_setCornerRadius:, nonatomic) double _cornerRadius;
@property (setter=_setGroupName:, nonatomic, copy) NSString *_groupName;
@property (setter=_setMaskImage:, nonatomic, retain) UIImage *_maskImage;
@property (getter=_isNoiseEnabled, setter=_setNoiseEnabled:, nonatomic) bool _noiseEnabled;
@property (setter=_setRenderMode:, nonatomic) long long _renderMode;
@property (nonatomic) bool allowsBlurring;
@property (nonatomic) bool allowsDithering;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, copy) NSArray *contentEffects;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, copy) UIVisualEffect *effect;
@property (nonatomic, copy) NSString *smu_groupName;
@property (getter=_useLiveMasking, setter=_setUseLiveMasking:, nonatomic) bool useLiveMasking;
@property (getter=_useReducedTransparencyForContentEffects, setter=_setUseReducedTransparencyForContentEffects:, nonatomic) bool useReducedTransparencyForContentEffects;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (Class)_contentViewClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)__isLandmarkView;
- (void)_addCaptureDependent:(id)arg1;
- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (bool)_allowsGroupFiltering;
- (bool)_applyCornerMaskToSelf;
- (void)_applyCornerRadiusToSubviews;
- (double)_backdropViewBackgroundColorAlpha;
- (id)_backgroundHost;
- (id)_captureDependents;
- (id)_captureGroup;
- (id)_captureSource;
- (id)_captureView;
- (id)_colorViewBoundsOverlayCreateIfNecessary:(bool)arg1;
- (void)_commonInit;
- (void)_configureEffects;
- (id)_contentHost;
- (double)_continuousCornerRadius;
- (id)_cornerCurve;
- (id)_cornerMask;
- (double)_cornerRadius;
- (id)_debug;
- (id)_effectDescriptorForEffects:(id)arg1 usage:(long long)arg2;
- (void)_ensureBackgroundHost;
- (void)_ensureContentHostWithView:(id)arg1;
- (id)_environment;
- (void)_generateBackgroundEffects:(id)arg1 contentEffects:(id)arg2;
- (void)_generateDeferredAnimations:(id)arg1;
- (void)_generateEffectAnimations:(id)arg1;
- (id)_groupName;
- (id)_initialValueForKey:(id)arg1;
- (bool)_isNoiseEnabled;
- (id)_maskImage;
- (id)_maskImageForMaskView:(id)arg1;
- (id)_maskView;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_registerNotifications;
- (void)_removeCaptureDependent:(id)arg1;
- (long long)_renderMode;
- (void)_resetEffect;
- (void)_setAllowsGroupFiltering:(bool)arg1;
- (void)_setBackdropViewBackgroundColorAlpha:(double)arg1;
- (void)_setCaptureDependents:(id)arg1;
- (void)_setCaptureView:(id)arg1;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerMask:(id)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1 continuous:(bool)arg2 maskedCorners:(unsigned long long)arg3;
- (void)_setEffect:(id)arg1;
- (void)_setGroupName:(id)arg1;
- (void)_setMaskImage:(id)arg1;
- (void)_setMaskView:(id)arg1;
- (void)_setNoiseEnabled:(bool)arg1;
- (void)_setRenderMode:(long long)arg1;
- (void)_setTintOpacity:(double)arg1;
- (void)_setUseLiveMasking:(bool)arg1;
- (void)_setUseReducedTransparencyForContentEffects:(bool)arg1;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (void)_unregisterNotifications;
- (void)_updateCaptureDependents;
- (void)_updateEffectBackgroundColor;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;
- (void)_updateEffectForAlphaTransitionDidEnd:(id)arg1;
- (void)_updateEffectForAlphaTransitionWillBegin:(id)arg1;
- (void)_updateEffectForReducedTransparency;
- (void)_updateEffectForSnapshotDidEnd:(id)arg1;
- (void)_updateEffectForSnapshotWillBegin:(id)arg1;
- (void)_updateEffectsFromLegacyEffect;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(id /* block */)arg1;
- (void)_updateSubView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateSubviews;
- (bool)_useLiveMasking;
- (bool)_useReducedTransparencyForContentEffects;
- (id)_whatsWrongWithThisEffect;
- (bool)allowsBlurring;
- (bool)allowsDithering;
- (id)backgroundEffects;
- (id)contentEffects;
- (id)contentView;
- (void)dealloc;
- (id)description;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)effect;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)respondToSettingsUpdate;
- (void)setAllowsBlurring:(bool)arg1;
- (void)setAllowsDithering:(bool)arg1;
- (void)setBackgroundEffects:(id)arg1;
- (void)setContentEffects:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setEffect:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)photoSmallAttributionVisualEffectView;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (void)hu_configureEffectForIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)safari_statusBarGradientBlurEffectView;
+ (id)sf_startPageBackgroundTraits;
+ (id)sf_startPageCellBackgroundEffectViewWithShadow:(bool)arg1;

- (void)sf_configureAsStartPageBackground;
- (void)sf_configureAsStartPageBackgroundWithNonVibrantBackgroundColor:(id)arg1;
- (void)sf_configureAsStartPageForegroundWithEffectStyle:(long long)arg1;
- (void)sf_setHighlighted:(bool)arg1 cellState:(id)arg2;
- (void)sf_setHighlighted:(bool)arg1 cellState:(id)arg2 nonVibrantBackgroundColor:(id)arg3;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (id)initWithBackgroundEffects:(id)arg1;
- (void)setSmu_groupName:(id)arg1;
- (id)smu_groupName;
- (void)smu_setBackgroundEffects:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI

- (void)ts_setGroupName:(id)arg1;

@end


@interface UIVisualEffectBackingHost : NSObject {
    NSArray * _backgroundEffects;
    _UIVisualEffectHost * _backgroundHost;
    _UIVisualEffectViewBackdropCaptureGroup * _captureGroup;
    NSString * _captureGroupName;
    NSArray * _contentEffects;
    _UIVisualEffectHost * _contentHost;
    _UIVisualEffectEnvironment * _environment;
    struct { 
        unsigned int backgroundNeedsUpdate : 1; 
        unsigned int contentNeedsUpdate : 1; 
        unsigned int isUpdatingSubviews : 1; 
        unsigned int usingPlainViewForBackground : 1; 
    }  _flags;
    UIView * _view;
    UIVisualEffect * _visualEffect;
    NSArray * _visualEffectSubviews;
}

@property (setter=_setCaptureGroupName:, nonatomic, copy) NSString *_captureGroupName;
@property (nonatomic, copy) NSArray *backgroundEffects;
@property (nonatomic, retain) _UIVisualEffectHost *backgroundHost;
@property (nonatomic, retain) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (nonatomic, copy) NSArray *contentEffects;
@property (nonatomic, retain) _UIVisualEffectHost *contentHost;
@property (nonatomic, retain) _UIVisualEffectEnvironment *environment;
@property (nonatomic) UIView *view;
@property (nonatomic, copy) UIVisualEffect *visualEffect;
@property (nonatomic, retain) NSArray *visualEffectSubviews;

- (void).cxx_destruct;
- (id)_captureGroupName;
- (void)_configureEffects;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (id)_effectDescriptorForEffects:(id)arg1 usage:(long long)arg2;
- (void)_ensureBackgroundHost;
- (void)_ensureContentHost;
- (void)_generateBackgroundEffects:(id)arg1 contentEffects:(id)arg2;
- (void)_generateDeferredAnimations:(id)arg1;
- (id)_initialValueForKey:(id)arg1;
- (id)_mergedTraitCollection;
- (void)_observeSuperviewContainerVibrancy;
- (void)_registerNotifications;
- (void)_setCaptureGroupName:(id)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)_unregisterNotifications;
- (void)_updateContentViewVibrancyTraitOverride:(id)arg1;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;
- (void)_updateEnvironmentAndFlagUpdatesIfNecessary:(id /* block */)arg1;
- (void)_updateSubviews;
- (id)backgroundEffects;
- (id)backgroundHost;
- (id)captureGroup;
- (id)contentEffects;
- (id)contentHost;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)environment;
- (id)initForView:(id)arg1;
- (void)invalidateCaptureGroupName;
- (void)setBackgroundEffects:(id)arg1;
- (void)setBackgroundHost:(id)arg1;
- (void)setCaptureGroup:(id)arg1;
- (void)setContentEffects:(id)arg1;
- (void)setContentHost:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setView:(id)arg1;
- (void)setVisualEffect:(id)arg1;
- (void)setVisualEffectSubviews:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)view;
- (id)visualEffect;
- (id)visualEffectSubviews;
- (void)willGainDescendent:(id)arg1;
- (void)willLoseDescendent:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

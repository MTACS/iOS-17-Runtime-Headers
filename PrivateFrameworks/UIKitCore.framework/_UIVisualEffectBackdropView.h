
@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview {
    _UIVisualEffectViewBackdropCaptureGroup * _captureGroup;
}

@property (nonatomic, readonly) CABackdropLayer *backdropLayer;
@property (nonatomic, retain) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property (nonatomic) long long renderMode;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)_applyScaleHintAsRequested:(bool)arg1;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (id)backdropLayer;
- (id)captureGroup;
- (bool)isTransparentFocusItem;
- (void)removeFromCurrentCaptureGroup;
- (long long)renderMode;
- (void)setCaptureGroup:(id)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

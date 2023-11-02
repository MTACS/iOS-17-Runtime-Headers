
@interface _UICopyEffectViewEntry : _UIVisualEffectViewEntry {
    _UIVisualEffectViewBackdropCaptureGroup * _captureGroup;
}

@property (nonatomic, retain) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (bool)canTransitionToEffect:(id)arg1;
- (id)captureGroup;
- (id)description;
- (void)removeEffectFromView:(id)arg1;
- (void)setCaptureGroup:(id)arg1;

@end

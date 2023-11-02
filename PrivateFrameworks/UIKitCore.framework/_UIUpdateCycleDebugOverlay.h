
@interface _UIUpdateCycleDebugOverlay : NSObject <_UIUpdateCompletionObserving> {
    UIWindow * _windowWithBorder;
}

+ (id)instance;

- (void).cxx_destruct;
- (void)_updateCompleted;
- (void)addBorderToWindow:(id)arg1;
- (void)removeBorderFromWindow:(id)arg1;

@end


@interface _UIFocusActiveSceneObserver : _UIFocusStateObserver {
    UIScene * _scene;
}

- (void).cxx_destruct;
- (id)_initWithScene:(id)arg1;
- (void)beginMonitoringContextChangesForWindow:(id)arg1;
- (id)init;
- (id)initWithScene:(id)arg1;
- (void)stopMonitoringContextChangesForWindow:(id)arg1;

@end

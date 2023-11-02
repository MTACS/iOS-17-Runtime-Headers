
@interface CPSApplicationStateMonitor : NSObject {
    NSString * _bundleIdentifier;
    NSObject<OS_dispatch_queue> * _stateObserverQueue;
    CARObserverHashTable * _stateObservers;
    UIWindowScene * _windowSceneForGuidanceWidgetScene;
    UIWindowScene * _windowSceneForMapWidgetScene;
    UIWindowScene * _windowSceneForTemplateApplicationScene;
}

@property (getter=isApplicationActive, nonatomic, readonly) bool applicationActive;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool canPostManeuverNotification;
@property (nonatomic, readonly) bool canPostNavigationAlertNotification;
@property (nonatomic, retain) CARObserverHashTable *stateObservers;
@property (nonatomic, readonly) bool templateApplicationSceneIsActive;
@property (nonatomic) UIWindowScene *windowSceneForGuidanceWidgetScene;
@property (nonatomic) UIWindowScene *windowSceneForMapWidgetScene;
@property (nonatomic) UIWindowScene *windowSceneForTemplateApplicationScene;

- (void).cxx_destruct;
- (void)_notifyObserversForeground:(bool)arg1;
- (void)_observeScene:(id)arg1;
- (void)_sceneActivated:(id)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (bool)_sceneIsForeground:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)addApplicationStateObserver:(id)arg1;
- (id)bundleIdentifier;
- (bool)canPostManeuverNotification;
- (bool)canPostNavigationAlertNotification;
- (void)dealloc;
- (id)init;
- (bool)isApplicationActive;
- (void)removeApplicationStateObserver:(id)arg1;
- (void)setStateObservers:(id)arg1;
- (void)setWindowSceneForGuidanceWidgetScene:(id)arg1;
- (void)setWindowSceneForMapWidgetScene:(id)arg1;
- (void)setWindowSceneForTemplateApplicationScene:(id)arg1;
- (id)stateObservers;
- (bool)templateApplicationSceneIsActive;
- (id)windowSceneForGuidanceWidgetScene;
- (id)windowSceneForMapWidgetScene;
- (id)windowSceneForTemplateApplicationScene;

@end

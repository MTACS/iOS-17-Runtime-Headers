
@interface FBSSceneObserver : NSObject <BSInvalidatable, FBSSceneObserver, FBSSceneObserverConfiguring> {
    id /* block */  _actionHandler;
    NSSet * _actions;
    NSSet * _clientSettings;
    id /* block */  _clintSettingsHandler;
    <FBSSceneComponent> * _component;
    id /* block */  _invalidationHandler;
    <FBSSceneObserver> * _observer;
    unsigned long long  _observerAddress;
    bool  _respondsToActions;
    bool  _respondsToClientSettings;
    bool  _respondsToHostHandle;
    bool  _respondsToInvalidate;
    bool  _respondsToSettings;
    NSSet * _settings;
    id /* block */  _settingsHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)actionClasses:(id)arg1;
- (void)actionHandler:(id /* block */)arg1;
- (void)actions:(Class)arg1;
- (void)clientSettingNames:(id)arg1;
- (void)clientSettings:(SEL)arg1;
- (void)clientUpdateHandler:(id /* block */)arg1;
- (id)component;
- (unsigned long long)hash;
- (id)initWithComponent:(id)arg1;
- (id)initWithObserver:(id)arg1;
- (void)invalidate;
- (void)invalidationHandler:(id /* block */)arg1;
- (bool)isEqual:(id)arg1;
- (id)observer;
- (void)scene:(id)arg1 didUpdateClientSettings:(id)arg2;
- (void)scene:(id)arg1 didUpdateHostHandle:(id)arg2;
- (void)scene:(id)arg1 didUpdateSettings:(id)arg2;
- (id)scene:(id)arg1 handleActions:(id)arg2;
- (void)sceneWillInvalidate:(id)arg1;
- (void)settingNames:(id)arg1;
- (void)settings:(SEL)arg1;
- (void)updateHandler:(id /* block */)arg1;

@end

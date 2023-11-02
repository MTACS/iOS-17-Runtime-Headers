
@interface _UIKeyWindowSceneObserver : NSObject <_UISceneComponentProviding> {
    _UIKeyWindowEvaluator * _keyWindowEvaluator;
    struct { 
        unsigned int sceneIsObservable : 1; 
    }  _observerFlags;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_scene;
- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithScene:(id)arg1;

@end

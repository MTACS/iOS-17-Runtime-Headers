
@interface SBDisplaySceneControllerComponent : NSObject <_UISceneComponentProviding> {
    <SBDisplaySceneControllerComponentDelegate> * _delegate;
    UIScene * _scene;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <SBDisplaySceneControllerComponentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_scene;
- (void)_setScene:(id)arg1;
- (id)delegate;
- (id)initWithScene:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

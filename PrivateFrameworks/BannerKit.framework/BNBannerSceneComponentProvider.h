
@interface BNBannerSceneComponentProvider : NSObject <_UISceneComponentProviding> {
    BNBannerClientContainerViewController * _containerViewController;
    <BNBannerSceneComponentProviderDelegate> * _delegate;
    UIScene * _scene;
    UIWindow * _sceneWindow;
}

@property (getter=_scene, setter=_setScene:, nonatomic) UIScene *_scene;
@property (nonatomic, readonly) BNBannerClientContainerViewController *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNBannerSceneComponentProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIWindow *sceneWindow;
@property (readonly) Class superclass;

+ (id)delegateAssociatedWithSceneForPresentableWithUniqueIdentifier:(id)arg1;
+ (void)registerDelegate:(id)arg1 forSceneForPresentableWithUniqueIdentifier:(id)arg2;
+ (void)unregisterDelegateForSceneForPresentableWithUniqueIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_actionRespondersForScene:(id)arg1;
- (id)_newSceneWindowWithRootViewController:(id)arg1;
- (id)_scene;
- (void)_sceneWillInvalidate:(id)arg1;
- (void)_setScene:(id)arg1;
- (id)_settingsDiffActionsForScene:(id)arg1;
- (id)containerViewController;
- (id)delegate;
- (id)initWithScene:(id)arg1;
- (id)sceneWindow;
- (void)setDelegate:(id)arg1;

@end

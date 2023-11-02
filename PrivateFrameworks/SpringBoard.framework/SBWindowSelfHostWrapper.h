
@interface SBWindowSelfHostWrapper : NSObject {
    UIView<UIScenePresentation> * _hostView;
    <UIScenePresenter> * _presenter;
    UIWindow * _window;
}

@property (nonatomic, readonly) UIView<UIScenePresentation> *hostView;
@property (nonatomic, readonly, copy) UIScenePresentationContext *presentationContext;
@property (nonatomic, readonly) <UIScenePresenter> *presenter;
@property (nonatomic, readonly, copy) NSString *requester;
@property (nonatomic, readonly) UIWindow *window;

+ (id)wrapperForUseInWindow:(id)arg1 hostRequester:(id)arg2 sceneIdentifier:(id)arg3;
+ (id)wrapperForWindow:(id)arg1 orientation:(long long)arg2 hostRequester:(id)arg3 sceneIdentifier:(id)arg4;

- (void).cxx_destruct;
- (id)hostView;
- (void)modifyPresentationContext:(id /* block */)arg1;
- (id)presentationContext;
- (id)presenter;
- (id)requester;
- (void)stopHosting;
- (id)window;

@end


@interface UVSceneHost : UIView {
    NSString * _hostIdentifier;
    UVInjectedScene * _injectedScene;
    bool  _invalidated;
    <UIScenePresenter> * _scenePresenter;
}

@property (nonatomic, readonly) UVInjectedScene *injectedScene;

+ (id)createWithInjectedScene:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_initWithHostIdentifier:(id)arg1 scenePresenter:(id)arg2 injectedScene:(id)arg3;
- (void)dealloc;
- (id)injectedScene;
- (void)invalidate;
- (void)layoutSubviews;

@end

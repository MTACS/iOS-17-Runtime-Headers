
@interface SBSystemApertureSceneElementScenePresenterView : UIView {
    FBScene * _scene;
    UIView * _sceneContentView;
    <UIScenePresenter> * _scenePresenter;
}

@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, readonly) UIView *sceneContentView;
@property (nonatomic, readonly) <UIScenePresenter> *scenePresenter;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)scene;
- (id)sceneContentView;
- (id)scenePresenter;
- (void)setScene:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

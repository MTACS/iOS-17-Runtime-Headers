
@interface PRUISAmbientPosterSceneLayerHostView : UIView {
    NSString * _identifier;
    <UIScenePresenter> * _presenter;
    FBScene * _scene;
    unsigned int  _sceneLayerContextID;
    UIView * _sceneLayerView;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) unsigned int contextID;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) FBScene *scene;

- (void).cxx_destruct;
- (unsigned int)contextID;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidate;
- (bool)isActive;
- (id)scene;
- (void)setActive:(bool)arg1;
- (bool)setContextID:(unsigned int)arg1 scene:(id)arg2;

@end


@interface HUEmbeddedSceneActionGridViewController : HomeUI.EmbeddedActionGridViewController {
    void sceneActionGridDelegate;
}

@property (nonatomic, retain) <HUEmbeddedSceneActionGridViewControllerDelegate> *sceneActionGridDelegate;

- (void).cxx_destruct;
- (id)initWithActionSetBuilder:(id)arg1;
- (id)sceneActionGridDelegate;
- (void)setSceneActionGridDelegate:(id)arg1;

@end


@interface _UISceneHostingWorkspaceController : NSObject <FBSceneWorkspaceDelegate> {
    FBSceneWorkspace * _sceneWorkspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSceneWorkspace *sceneWorkspace;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)sceneWorkspace;
- (void)workspace:(id)arg1 didAddScene:(id)arg2;
- (void)workspace:(id)arg1 willRemoveScene:(id)arg2;

@end

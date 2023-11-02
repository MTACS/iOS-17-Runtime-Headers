
@interface FBSceneSnapshotAction : FBSSceneSnapshotAction {
    RBSAssertion * _assertion;
    NSString * _description;
    NSString * _sceneID;
}

@property (nonatomic, readonly) NSString *sceneID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScene:(id)arg1 requests:(id)arg2 expirationInterval:(double)arg3 responseHandler:(id /* block */)arg4;
- (void)invalidate;
- (id)sceneID;

@end

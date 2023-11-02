
@interface _SBFluidSwitcherSystemApertureSuppressionAssertion : NSObject <BSInvalidatable> {
    NSString * _bundleID;
    id /* block */  _invalidationBlock;
    bool  _isValid;
    NSString * _sceneID;
}

@property (nonatomic, readonly, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *sceneID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleID;
- (void)dealloc;
- (id)description;
- (id)initWithSceneID:(id)arg1 bundleID:(id)arg2 invalidationBlock:(id /* block */)arg3;
- (void)invalidate;
- (id)sceneID;

@end

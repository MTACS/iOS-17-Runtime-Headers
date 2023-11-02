
@interface FBWorkspaceSceneRequest : NSObject <FBSceneObserver> {
    NSSet * _actions;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    id /* block */  _lock_completion;
    bool  _lock_responded;
    FBSWorkspaceSceneRequestOptions * _options;
    NSString * _targetIdentifier;
}

@property (nonatomic, readonly) NSSet *actions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSWorkspaceSceneRequestOptions *options;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *targetIdentifier;

- (void).cxx_destruct;
- (void)_respondWithScene:(id)arg1 error:(id)arg2;
- (id)actions;
- (void)dealloc;
- (id)init;
- (id)initWithTargetIdentifier:(id)arg1;
- (id)initWithTargetIdentifier:(id)arg1 actions:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithTargetIdentifier:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)invalidateWithError:(id)arg1;
- (void)observeScene:(id)arg1;
- (id)options;
- (bool)requiresModernDispatcher;
- (void)respondWithScene:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (id)targetIdentifier;

@end

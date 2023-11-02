
@interface FBUpdateSceneTransaction : FBTransaction <FBSceneObserver, FBSynchronizedTransaction> {
    FBSSceneDefinition * _definition;
    bool  _destroyed;
    FBWaitForSceneDestructionTransaction * _destructionTransaction;
    bool  _didCommit;
    FBSSceneParameters * _parameters;
    bool  _readyToCommit;
    NSString * _sceneID;
    FBSceneManager * _sceneManager;
    <FBSynchronizedTransactionDelegate> * _synchronizationDelegate;
    unsigned long long  _transactionID;
    FBSSceneTransitionContext * _transitionContext;
    bool  _waitsForSceneCommit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool destroyed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSSceneSettings *newSettings;
@property (nonatomic, readonly) FBScene *scene;
@property (nonatomic, readonly) NSString *sceneIdentifier;
@property (nonatomic, readonly) FBSSceneSettings *settings;
@property (nonatomic, readonly) FBSSceneSpecification *specification;
@property (readonly) Class superclass;
@property (nonatomic) <FBSynchronizedTransactionDelegate> *synchronizationDelegate;
@property (nonatomic, readonly) FBSSceneTransitionContext *transitionContext;
@property (nonatomic) bool waitsForSceneCommit;

- (void).cxx_destruct;
- (void)_begin;
- (bool)_canBeInterrupted;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_commitSceneOrWait;
- (void)_commitSceneUpdate:(id /* block */)arg1;
- (void)_createScene;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (id)_initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (void)_noteDidCommit:(bool)arg1;
- (void)_noteDidCreate;
- (void)_noteWillCommit;
- (void)_noteWillUpdate;
- (void)_performCommit;
- (void)_updateScene;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (bool)destroyed;
- (id)initWithSceneDefinition:(id)arg1 parameters:(id)arg2 transitionContext:(id)arg3;
- (id)initWithSceneIdentifier:(id)arg1 process:(id)arg2 parameters:(id)arg3 transitionContext:(id)arg4;
- (id)initWithSceneToUpdate:(id)arg1 newSettings:(id)arg2 transitionContext:(id)arg3;
- (bool)isReadyForSynchronizedCommit;
- (id)newSettings;
- (void)performSynchronizedCommit;
- (void)removeObserver:(id)arg1;
- (id)scene;
- (void)sceneDidInvalidate:(id)arg1;
- (id)sceneIdentifier;
- (void)setSynchronizationDelegate:(id)arg1;
- (void)setWaitsForSceneCommit:(bool)arg1;
- (id)settings;
- (id)specification;
- (id)synchronizationDelegate;
- (id)transitionContext;
- (bool)waitsForSceneCommit;

@end

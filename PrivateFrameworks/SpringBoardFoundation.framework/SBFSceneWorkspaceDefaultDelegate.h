
@interface SBFSceneWorkspaceDefaultDelegate : NSObject <SBFSceneWorkspaceControllerDelegate> {
    NSMutableSet * _scenesActivatedUponClientConnection;
    NSMutableSet * _scenesKeptActiveWhileForeground;
    NSMutableDictionary * _scenesWithActivationContextGeneratorBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateScene:(id)arg1;
- (void)_cleanupTransitionContextGeneratorBlockForSceneIfNeeded:(id)arg1;
- (void)_setScene:(id)arg1 activatesWithTransitionContextGeneratorBlock:(id /* block */)arg2;
- (void)_setScene:(id)arg1 cached:(bool)arg2 inContainer:(id)arg3 withContextGenerator:(id /* block */)arg4;
- (id)init;
- (void)sceneContentStateDidChange:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;
- (void)setScene:(id)arg1 shouldActivateUponClientConnection:(bool)arg2 withContextGenerator:(id /* block */)arg3;
- (void)setScene:(id)arg1 shouldBeKeptActiveWhileForeground:(bool)arg2 withContextGenerator:(id /* block */)arg3;
- (void)workspace:(id)arg1 clientDidConnectWithHandshake:(id)arg2;
- (void)workspace:(id)arg1 didAddScene:(id)arg2;
- (void)workspace:(id)arg1 willRemoveScene:(id)arg2;

@end


@interface SBTransientOverlayBlockTransitionCoordinator : NSObject <SBTransientOverlayTransitionCoordinating> {
    id /* block */  _finalizeTransitionHandler;
    id /* block */  _startTransitionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ finalizeTransitionHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ startTransitionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)finalizeTransitionHandler;
- (void)finalizeTransitionWithContextProvider:(id)arg1;
- (void)setFinalizeTransitionHandler:(id /* block */)arg1;
- (void)setStartTransitionHandler:(id /* block */)arg1;
- (id /* block */)startTransitionHandler;
- (void)startTransitionWithContextProvider:(id)arg1;

@end

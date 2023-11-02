
@interface SBNonInteractiveDisplaySceneManager : SBSceneManager <SBSuspendedUnderLockManagerDelegate> {
    SBSuspendedUnderLockManager * _lazy_suspendedUnderLockManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_externalCoverSheetVisibilityDidDismiss:(id)arg1;
- (void)_externalCoverSheetVisibilityDidPresent:(id)arg1;
- (bool)_shouldAutoHostScene:(id)arg1;
- (void)dealloc;
- (id)externalApplicationSceneHandles;
- (id)initWithReference:(id)arg1 sceneIdentityProvider:(id)arg2 presentationBinder:(id)arg3 snapshotBehavior:(unsigned long long)arg4;
- (bool)isSuspendedUnderLock;
- (id)runningApplicationScenes:(id)arg1;
- (void)setSuspendedUnderLock:(bool)arg1;
- (void)setSuspendedUnderLock:(bool)arg1 alongsideWillChangeBlock:(id /* block */)arg2 alongsideDidChangeBlock:(id /* block */)arg3;
- (id)suspendedUnderLockManager:(id)arg1 sceneHandleForScene:(id)arg2;
- (bool)suspendedUnderLockManager:(id)arg1 shouldPreventSuspendUnderLockForScene:(id)arg2;
- (bool)suspendedUnderLockManager:(id)arg1 shouldPreventUnderLockForScene:(id)arg2;
- (id)suspendedUnderLockManagerDisplayConfiguration:(id)arg1;
- (id)suspendedUnderLockManagerVisibleScenes:(id)arg1;

@end

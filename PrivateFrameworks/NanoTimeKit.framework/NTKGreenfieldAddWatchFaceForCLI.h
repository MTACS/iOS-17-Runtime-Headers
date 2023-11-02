
@interface NTKGreenfieldAddWatchFaceForCLI : NSObject <NTKGreenfieldAddWatchFaceManagerDelegate> {
    NTKGreenfieldAddWatchFaceManager * _addWatchFaceManager;
    id /* block */  _completion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addWatchFaceManager:(id)arg1 didFinishAddingFaceWithError:(id)arg2;
- (void)addWatchFaceManager:(id)arg1 updateStateToAddComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;
- (void)addWatchFaceManager:(id)arg1 updateStateToCompletedWithSkippedComplicationSlots:(id)arg2 canRevisit:(bool)arg3;
- (void)addWatchFaceManager:(id)arg1 updateStateToComplicationsNotAvailableWithSlots:(id)arg2 unavailableTitle:(id)arg3 unavailableDescription:(id)arg4;
- (void)addWatchFaceManager:(id)arg1 updateStateToRevisitComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;
- (void)addWatchFaceManager:(id)arg1 updateStateToWelcomeWithCanAddFaceDirectly:(bool)arg2;
- (void)addWatchFaceWithURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didStartLoadingInAddWatchFaceManager:(id)arg1;

@end

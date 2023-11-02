
@interface PXSharedLibraryAssistantContext : NSObject <PXAssistantContext, PXChangeObserver> {
    PXSharedLibraryFaceTileImageProvider * _faceTileImageProvider;
    PXSharedLibraryLegacyDevicesFallbackMonitor * _legacyDevicesFallbackMonitor;
    PXSharedLibraryLegacyDevicesRemoteController * _legacyDevicesRemoteController;
    PXLibraryFilterState * _libraryFilterState;
    <PXSharedLibrary> * _sharedLibrary;
    PXSharedLibraryStatusProvider * _statusProvider;
    NSMutableDictionary * _stepContextIdentifiersToContexts;
    PXSharedLibraryAssistantViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXSharedLibraryLegacyDevicesFallbackMonitor *legacyDevicesFallbackMonitor;
@property (nonatomic, readonly) PXSharedLibraryLegacyDevicesRemoteController *legacyDevicesRemoteController;
@property (nonatomic, readonly) PXLibraryFilterState *libraryFilterState;
@property (nonatomic, readonly) <PXSharedLibrary> *sharedLibrary;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *statusProvider;
@property (nonatomic, readonly) NSMutableDictionary *stepContextIdentifiersToContexts;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXSharedLibraryAssistantViewModel *viewModel;

+ (id)_reviewContextIdentifierForMode:(long long)arg1 hasPreview:(bool)arg2;
+ (id)replyAssistantContextWithSharedLibraryStatusProvider:(id)arg1 sharedLibrary:(id)arg2 legacyDevicesFallbackMonitor:(id)arg3;
+ (id)setupAssistantContextWithSharedLibraryStatusProvider:(id)arg1 sharedLibrary:(id)arg2 sourceLibraryInfo:(id)arg3 legacyDevicesFallbackMonitor:(id)arg4;

- (void).cxx_destruct;
- (id)_cameraStepContextWithIdentifier:(id)arg1;
- (id)_dateSelectionStepContextWithIdentifier:(id)arg1;
- (id)_firstVisibleStepContextIdentifierIgnoringPreview:(bool)arg1;
- (id)_howToStepContextWithIdentifier:(id)arg1;
- (id)_initWithSharedLibraryStatusProvider:(id)arg1 sharedLibrary:(id)arg2 sourceLibraryInfo:(id)arg3 legacyDevicesFallbackMonitor:(id)arg4 legacyDevicesRemoteController:(id)arg5 mode:(long long)arg6;
- (id)_legacyDeviceStepContextIdentifierOrNextContextIdentifier:(id)arg1;
- (id)_legacyDevicesFallbackStepContextWithIdentifier:(id)arg1;
- (id)_nextContextIdentifierForSelectedPolicy:(long long)arg1;
- (id)_nextStepContextIdentifierFromStepContextIdentifier:(id)arg1;
- (id)_participantsStepContextWithIdentifier:(id)arg1;
- (id)_peopleSelectionStepContextWithIdentifier:(id)arg1;
- (id)_replyIntroStepContextWithIdentifier:(id)arg1;
- (id)_reviewParticipantsSetupDirectStepContextWithIdentifier:(id)arg1;
- (id)_reviewParticipantsSetupPreviewStepContextWithIdentifier:(id)arg1;
- (id)_reviewParticipantsSetupStepContextWithIdentifier:(id)arg1;
- (id)_reviewReplyDirectStepContextWithIdentifier:(id)arg1;
- (id)_reviewReplyPreviewStepContextWithIdentifier:(id)arg1;
- (id)_reviewReplyStepContextWithIdentifier:(id)arg1;
- (id)_rulesStepContextWithIdentifier:(id)arg1;
- (id)_setupIntroStepContextWithIdentifier:(id)arg1;
- (id)_summaryStepContextWithIdentifier:(id)arg1;
- (void)_updateCombinedImage;
- (void)_updateParticipantsInFaceTile;
- (void)configureParticipantListForStepContext:(id)arg1 isReviewStep:(bool)arg2;
- (id)init;
- (id)initialStepContextIdentifiers;
- (id)legacyDevicesFallbackMonitor;
- (id)legacyDevicesRemoteController;
- (id)libraryFilterState;
- (id)nextStepContextIdentifierFromStepContextIdentifier:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setAssistantTraitCollection:(id)arg1;
- (id)sharedLibrary;
- (id)sharedLibraryStepContextForStepContextIdentifier:(id)arg1;
- (bool)shouldConfirmCancellationOfAssistantForStepContextWithIdentifier:(id)arg1;
- (id)statusProvider;
- (id)stepContextForStepContextIdentifier:(id)arg1;
- (id)stepContextIdentifiersToContexts;
- (void)stepContextWithIdentifier:(id)arg1 confirmCancellationWithAlertProperties:(id /* block */)arg2;
- (id)viewModel;
- (void)willCancelAssistant;

@end

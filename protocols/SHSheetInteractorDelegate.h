
@protocol SHSheetInteractorDelegate <NSObject>

@required

- (<SHSheetActivityPerformerPresentationInterface> *)interactor:(id <SHSheetInteractor>)arg1 activityPresentationControllerForActivity:(UIActivity *)arg2;
- (void)interactor:(id <SHSheetInteractor>)arg1 airDropViewServiceWillStartTransferToRecipient:(SFShareSheetRecipient *)arg2;
- (void)interactor:(void *)arg1 canManageShareForDocumentInSharedFolderWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: <SHSheetInteractor> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)interactor:(void *)arg1 canShareFolderContainingExistingSharedItemsWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: <SHSheetInteractor> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)interactor:(void *)arg1 createSharingURLWithParticipantsForCollaborationRequest:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: <SHSheetInteractor> *, SFCollaborationCloudSharingRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFCollaborationCloudSharingResult *, void*
- (void)interactor:(id <SHSheetInteractor>)arg1 creatingCollaborationForActivity:(UIActivity *)arg2;
- (void)interactor:(id <SHSheetInteractor>)arg1 didCancelCollaborationForActivity:(UIActivity *)arg2;
- (void)interactor:(id <SHSheetInteractor>)arg1 didChangeMetadata:(LPLinkMetadata *)arg2;
- (void)interactor:(id <SHSheetInteractor>)arg1 didCreateCollaborationForActivity:(UIActivity *)arg2;
- (void)interactor:(id <SHSheetInteractor>)arg1 didFailCreatingCollaborationForActivity:(UIActivity *)arg2 error:(NSError *)arg3;
- (void)interactor:(id <SHSheetInteractor>)arg1 didPerformActivityWithResult:(SHSheetActivityPerformerResult *)arg2;
- (void)interactor:(id <SHSheetInteractor>)arg1 didPerformAirdropViewActivityWithNoContentView:(bool)arg2;
- (void)interactor:(id <SHSheetInteractor>)arg1 didPerformUserDefaultsActivityWithContext:(SHSheetUserDefaultsContext *)arg2;
- (void)interactor:(id <SHSheetInteractor>)arg1 didUpdateAirDropTransferWithChange:(SFAirDropTransferChange *)arg2;
- (LPLinkMetadata *)interactor:(id <SHSheetInteractor>)arg1 linkMetadataForActivity:(UIActivity *)arg2;
- (void)interactor:(id <SHSheetInteractor>)arg1 willPerformActivity:(UIActivity *)arg2;
- (void)interactorDidFailPerformActivityNotCollaborationEligible:(id <SHSheetInteractor>)arg1;
- (void)interactorDidUpdateCollaborationDetails:(id <SHSheetInteractor>)arg1;
- (void)interactorDidUpdateHeaderMetadata:(id <SHSheetInteractor>)arg1;
- (void)interactorDidUpdateObjectManipulationSupport:(id <SHSheetInteractor>)arg1;
- (void)interactorDidUpdateSessionConfiguration:(id <SHSheetInteractor>)arg1;

@end

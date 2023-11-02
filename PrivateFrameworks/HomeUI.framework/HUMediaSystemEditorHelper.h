
@interface HUMediaSystemEditorHelper : NSObject {
    NAFuture * _accountArbitrationFuture;
    <HUMediaSystemEditorHelperDelegate> * _delegate;
    NAFuture * _inFlightCommitFuture;
}

@property (nonatomic, retain) NAFuture *accountArbitrationFuture;
@property (nonatomic) <HUMediaSystemEditorHelperDelegate> *delegate;
@property (nonatomic, retain) NAFuture *inFlightCommitFuture;
@property (nonatomic, readonly) HFMediaSystemBuilder *mediaSystemBuilder;

- (void).cxx_destruct;
- (id /* block */)_authKitContextGenerator;
- (id)_checkIfAccessoriesNeedSoftwareUpdateToSupportPairing;
- (void)_configureMediaSystemBuilderToMoveHomePodsToRoom:(id)arg1;
- (id)_executeAppleMusicAccountReconcilationForMediaSystemBuilder:(id)arg1;
- (id)_executePreferredMediaUserReconcilationForMediaSystemBuilder:(id)arg1;
- (id)_promptForRoomChange;
- (id)accountArbitrationFuture;
- (id)createMediaSystem;
- (id)createMediaSystemWithAccessory:(id)arg1;
- (id)delegate;
- (id)inFlightCommitFuture;
- (id)initWithDelegate:(id)arg1;
- (id)mediaSystemBuilder;
- (void)setAccountArbitrationFuture:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInFlightCommitFuture:(id)arg1;

@end

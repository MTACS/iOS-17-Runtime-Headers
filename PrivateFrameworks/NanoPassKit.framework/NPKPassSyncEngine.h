
@interface NPKPassSyncEngine : NSObject <NSSecureCoding> {
    NPKPassSyncState * _backupState;
    NPKPassSyncChange * _candidateChange;
    NPKPassSyncState * _candidateState;
    <NPKPassSyncEngineDataSource> * _dataSource;
    <NPKPassSyncEngineDelegate> * _delegate;
    unsigned long long  _engineRole;
    NPKPassSyncState * _libraryState;
    NPKPassSyncChange * _processingChange;
    NPKPassSyncState * _reconciledState;
    bool  _requireAppleAccountForPaymentPasses;
}

@property (nonatomic, retain) NPKPassSyncState *backupState;
@property (nonatomic, retain) NPKPassSyncChange *candidateChange;
@property (nonatomic, retain) NPKPassSyncState *candidateState;
@property (nonatomic) <NPKPassSyncEngineDataSource> *dataSource;
@property (nonatomic) <NPKPassSyncEngineDelegate> *delegate;
@property (nonatomic, readonly) NSString *engineName;
@property (nonatomic, readonly) unsigned long long engineRole;
@property (nonatomic, retain) NPKPassSyncState *libraryState;
@property (nonatomic, retain) NPKPassSyncChange *processingChange;
@property (nonatomic, retain) NPKPassSyncState *reconciledState;
@property (nonatomic) bool requireAppleAccountForPaymentPasses;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_engineStateChanged;
- (void)_finishedProcessingChange:(id)arg1;
- (void)_handleStateChange:(id)arg1 attemptRecoverReconcileStateVersionMismatch:(bool)arg2;
- (void)_receivedStateChangeProcessed:(id)arg1 changeAccepted:(bool)arg2;
- (void)_requestAddPassData:(id)arg1 forSyncStateItem:(id)arg2 completion:(id /* block */)arg3;
- (void)_requestRemovePassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)_requestUpdatePassData:(id)arg1 forSyncStateItem:(id)arg2 baseManifestHashForPartialUpdate:(id)arg3 remoteAssetsForPartialUpdate:(id)arg4 completion:(id /* block */)arg5;
- (void)_sendNextStateChange;
- (void)_sendProposedReconciledState:(id)arg1;
- (void)_sendReconciledStateAcceptedWithHash:(id)arg1;
- (void)_sendReconciledStateUnrecognizedWithHash:(id)arg1 version:(unsigned long long)arg2 currentPassSyncState:(id)arg3;
- (void)_sendStateChange:(id)arg1;
- (void)_sendStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(bool)arg2 fullPassRequired:(bool)arg3;
- (void)_shouldProcessAddOrUpdateChangeOfType:(unsigned long long)arg1 changeSyncStateItem:(id)arg2 librarySyncStateItem:(id)arg3 reconciledSyncStateItem:(id)arg4 candidateChange:(id)arg5 shouldApplyToPassLibrary:(bool*)arg6 shouldApplyToReconciledState:(bool*)arg7;
- (void)_unexpectedEventOccurred;
- (id)backupState;
- (id)candidateChange;
- (id)candidateState;
- (id)dataSource;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)engineName;
- (unsigned long long)engineRole;
- (void)handleProposedReconciledState:(id)arg1;
- (void)handleReconciledStateAcceptedWithHash:(id)arg1;
- (void)handleReconciledStateUnrecognizedWithHash:(id)arg1 version:(unsigned long long)arg2 passSyncState:(id)arg3;
- (void)handleStateChange:(id)arg1;
- (void)handleStateChangeProcessedWithUUID:(id)arg1 changeAccepted:(bool)arg2 fullPassRequired:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithRole:(unsigned long long)arg1;
- (id)libraryState;
- (id)processingChange;
- (id)reconciledState;
- (bool)requireAppleAccountForPaymentPasses;
- (void)setBackupState:(id)arg1;
- (void)setCandidateChange:(id)arg1;
- (void)setCandidateState:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLibraryState:(id)arg1;
- (void)setMinSyncStateVersion:(unsigned long long)arg1;
- (void)setProcessingChange:(id)arg1;
- (void)setReconciledState:(id)arg1;
- (void)setRequireAppleAccountForPaymentPasses:(bool)arg1;
- (void)syncIfNecessary;

@end

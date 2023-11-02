
@interface CDPDEscrowRecordController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate> {
    CDPDCircleController * _circleController;
    <CDPDCircleProxy> * _circleProxy;
    CDPContext * _context;
    AAFKeychainManager * _keychainManager;
    <CDPDOctagonTrustProxy> * _octagonTrustProxy;
    CDPDSecureBackupController * _secureBackupController;
    <CDPDSecureBackupProxy> * _secureBackupProxy;
}

@property (nonatomic, readonly) CDPDCircleController *circleController;
@property (nonatomic, readonly) <CDPDCircleProxy> *circleProxy;
@property (nonatomic, readonly) CDPContext *context;
@property (nonatomic, readonly) AAFKeychainManager *keychainManager;
@property (nonatomic, readonly) <CDPDOctagonTrustProxy> *octagonTrustProxy;
@property (nonatomic, readonly) CDPDSecureBackupController *secureBackupController;
@property (nonatomic, readonly) <CDPDSecureBackupProxy> *secureBackupProxy;

- (void).cxx_destruct;
- (void)_beginSilentEscrowRecordRepairWithState:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_checkAllRecordsForCurrentDeviceUsingCache:(bool)arg1 completion:(id /* block */)arg2;
- (void)_checkAllRecordsForDeviceMatchingPredicate:(id)arg1 source:(long long)arg2 completion:(id /* block */)arg3;
- (bool)_clearLastEscrowRepairAttemptDate:(id*)arg1;
- (unsigned long long)_combinedCircleStatusUsingCache:(bool)arg1 error:(id*)arg2;
- (void)_continueSilentEscrowRecordRepairWithState:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_determineEligibilityForSilentRepairWithCompletion:(id /* block */)arg1;
- (void)_deviceEscrowRecordStateUsingCache:(bool)arg1 completion:(id /* block */)arg2;
- (void)_escrowRecordStateForDevice:(id)arg1 usingCache:(bool)arg2 completion:(id /* block */)arg3;
- (void)_fetchAllEscrowRecordsFromSource:(long long)arg1 completion:(id /* block */)arg2;
- (id)_firstUsableRecordForCurrentPeerWithSerialNumber:(id)arg1 fromRecords:(id)arg2;
- (bool)_isEligibleForEscrowRecordOperationsWithError:(id*)arg1;
- (bool)_isEscrowRecordRepairPermitted;
- (id)_lastEscrowRepairAttemptDate:(id*)arg1;
- (id)_lastEscrowRepairAttemptDateDescriptor;
- (void)_performSilentEscrowRecordRepairWithCompletion:(id /* block */)arg1;
- (id)_predicateForRecordWithPeerID:(id)arg1;
- (bool)_setLastEscrowRepairAttemptDate:(id)arg1 error:(id*)arg2;
- (void)_shouldPerformSilentEscrowRecordRepairUsingCache:(bool)arg1 completion:(id /* block */)arg2;
- (bool)_shouldPerformSilentRepairForEscrowRecordState:(unsigned long long)arg1;
- (void)_tlkRecoveryViewsForRecord:(id)arg1 usingCache:(bool)arg2 completion:(id /* block */)arg3;
- (id)circleController;
- (void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(id /* block */)arg2;
- (id)circlePeerIDForSecureBackupController:(id)arg1;
- (id)circleProxy;
- (id)context;
- (id)contextForController:(id)arg1;
- (void)generateEscrowRecordStatusReportForLocalDeviceUsingCache:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)generateEscrowRecordStatusReportForLocalDeviceUsingFetchSource:(long long)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 circleProxy:(id)arg2 octagonTrustProxy:(id)arg3 secureBackupProxy:(id)arg4;
- (id)keychainManager;
- (id)octagonTrustProxy;
- (void)performSilentEscrowRecordRepairWithCompletion:(id /* block */)arg1;
- (void)promptForAdoptionOfMultipleICSCWithCompletion:(id /* block */)arg1;
- (void)promptForLocalSecretWithCompletion:(id /* block */)arg1;
- (id)secureBackupController;
- (id)secureBackupProxy;
- (id)secureChannelContextForController:(id)arg1;
- (void)shouldPerformSilentEscrowRecordRepairUsingCache:(bool)arg1 completion:(id /* block */)arg2;
- (bool)synchronizeCircleViewsForSecureBackupContext:(id)arg1;
- (bool)updateLastSilentEscrowRecordRepairAttemptDate:(id)arg1 error:(id*)arg2;

@end


@interface _PKProvisioningSEStorageManager : NSObject {
    void secureElement;
    void webService;
}

- (void).cxx_destruct;
- (void)currentSnapshotWithCompletion:(id /* block */)arg1;
- (void)debugReservationDescriptionsWithCompletion:(id /* block */)arg1;
- (void)deleteExpiredReservationsWithCompletion:(id /* block */)arg1;
- (void)deleteWithReservation:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithWebService:(id)arg1;
- (void)performDebugSECleanupWithCompletion:(id /* block */)arg1;
- (void)reserveStorageFor:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;

@end

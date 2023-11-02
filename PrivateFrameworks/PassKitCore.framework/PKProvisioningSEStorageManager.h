
@interface PKProvisioningSEStorageManager : NSObject {
    _PKProvisioningSEStorageManager * _manager;
}

- (void).cxx_destruct;
- (void)debugPerformSECleanup:(id /* block */)arg1;
- (void)debugReservationDescriptions:(id /* block */)arg1;
- (void)deleteReservation:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithWebService:(id)arg1;
- (void)reserveStorageForAppletTypes:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;

@end

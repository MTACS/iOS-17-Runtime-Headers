
@interface PKPassSnapshotCoordinator : NSObject <PKPassSnapshotCoordinatorProtocol> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSArray * _secureElementIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createPassSnapshotFromPaymentPass:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)_fallbackImageForCredential:(id)arg1;
- (id)cardSnapshotForSource:(id)arg1 withSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)initWithSEIDs:(id)arg1;

@end

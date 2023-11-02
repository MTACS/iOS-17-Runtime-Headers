
@interface HMDBackingStoreHandler : HMFObject <HMDBackingStoreObjectProtocol, HMFLogging> {
    HMDBackingStore * _backingStore;
    NSUUID * _identifier;
}

@property (readonly) HMDBackingStore *backingStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)backingStore;
- (id)backingStoreObjectsForVersion:(long long)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)logIdentifier;
- (id)privateDescription;
- (void)runTransactionWithModel:(id)arg1 options:(id)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)runTransactionWithModel:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)runTransactionWithModels:(id)arg1 options:(id)arg2 reason:(id)arg3 completion:(id /* block */)arg4;
- (void)runTransactionWithModels:(id)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;

@end

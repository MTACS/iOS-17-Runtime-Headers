
@interface HMDCHIPAccessoryDataSource : HMFObject <HMMTRDeviceStorageDataSource> {
    HMDHAPAccessory * _accessory;
    NSNumber * _nodeID;
}

@property HMDHAPAccessory *accessory;
@property (nonatomic, readonly, copy) NSData *attributeDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *nodeID;
@property (nonatomic, readonly, copy) NSSet *pairings;
@property (nonatomic, readonly, copy) NSNumber *productID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSNumber *vendorID;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_updateAccessoryModelWithLabel:(id)arg1 completion:(id /* block */)arg2 block:(id /* block */)arg3;
- (id)accessory;
- (id)attributeDatabase;
- (id)initWithNodeID:(id)arg1 accessory:(id)arg2;
- (id)logIdentifier;
- (id)nodeID;
- (id)pairings;
- (id)productID;
- (void)setAccessory:(id)arg1;
- (void)updateAttributeDatabase:(id)arg1 completion:(id /* block */)arg2;
- (void)updateNodeID:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePairings:(id)arg1 completion:(id /* block */)arg2;
- (void)updateProductID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateVendorID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateVendorID:(id)arg1 productID:(id)arg2 completion:(id /* block */)arg3;
- (id)vendorID;

@end

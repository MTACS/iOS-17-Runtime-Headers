
@interface MTROperationalCredentialsClusterFabricDescriptorStruct : NSObject <NSCopying> {
    NSNumber * _fabricID;
    NSNumber * _fabricIndex;
    NSString * _label;
    NSNumber * _nodeID;
    NSData * _rootPublicKey;
    NSNumber * _vendorID;
}

@property (nonatomic, copy) NSNumber *fabricID;
@property (nonatomic, copy) NSNumber *fabricId;
@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *nodeID;
@property (nonatomic, copy) NSNumber *nodeId;
@property (nonatomic, copy) NSData *rootPublicKey;
@property (nonatomic, copy) NSNumber *vendorID;
@property (nonatomic, copy) NSNumber *vendorId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fabricID;
- (id)fabricId;
- (id)fabricIndex;
- (id)init;
- (id)label;
- (id)nodeID;
- (id)nodeId;
- (id)rootPublicKey;
- (void)setFabricID:(id)arg1;
- (void)setFabricId:(id)arg1;
- (void)setFabricIndex:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setNodeID:(id)arg1;
- (void)setNodeId:(id)arg1;
- (void)setRootPublicKey:(id)arg1;
- (void)setVendorID:(id)arg1;
- (void)setVendorId:(id)arg1;
- (id)vendorID;
- (id)vendorId;

@end

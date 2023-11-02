
@interface HMMTRPairing : HMFObject <NSCopying> {
    NSNumber * _fabricID;
    NSString * _fabricLabel;
    NSNumber * _nodeID;
    NSData * _rootPublicKey;
    NSNumber * _vendorID;
    NSString * _vendorName;
}

@property (readonly) NSNumber *fabricID;
@property (readonly, copy) NSString *fabricLabel;
@property (readonly) NSNumber *nodeID;
@property (readonly) NSData *rootPublicKey;
@property (readonly) NSNumber *vendorID;
@property (readonly, copy) NSString *vendorName;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fabricID;
- (id)fabricLabel;
- (unsigned long long)hash;
- (id)initWithFabricDescriptor:(id)arg1 vendorName:(id)arg2;
- (id)initWithNodeID:(id)arg1 fabricID:(id)arg2 fabricLabel:(id)arg3 rootPublicKey:(id)arg4 vendorID:(id)arg5 vendorName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)nodeID;
- (id)rootPublicKey;
- (id)vendorID;
- (id)vendorName;

@end

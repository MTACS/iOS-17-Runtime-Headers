
@interface HMDCHIPAccessoryStorage : HMFObject <NSCopying, NSSecureCoding> {
    NSData * _attributeDatabase;
    NSNumber * _nodeID;
    NSSet * _pairings;
    NSNumber * _productID;
    NSNumber * _vendorID;
}

@property (copy) NSData *attributeDatabase;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (copy) NSNumber *nodeID;
@property (copy) NSSet *pairings;
@property (copy) NSNumber *productID;
@property (copy) NSNumber *vendorID;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDatabase;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)nodeID;
- (id)pairings;
- (id)productID;
- (void)setAttributeDatabase:(id)arg1;
- (void)setNodeID:(id)arg1;
- (void)setPairings:(id)arg1;
- (void)setProductID:(id)arg1;
- (void)setVendorID:(id)arg1;
- (void)updateAccessoryModel:(id)arg1;
- (bool)updateUsingAccessoryModel:(id)arg1;
- (id)vendorID;

@end

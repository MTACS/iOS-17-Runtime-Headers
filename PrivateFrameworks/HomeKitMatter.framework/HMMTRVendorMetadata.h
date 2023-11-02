
@interface HMMTRVendorMetadata : HMFObject <NSCopying, NSMutableCopying> {
    NSNumber * _schemaVersion;
    NSDictionary * _vendorsByVendorID;
    NSNumber * _version;
}

@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSNumber *schemaVersion;
@property (readonly, copy) NSSet *vendors;
@property (copy) NSDictionary *vendorsByVendorID;
@property (readonly, copy) NSNumber *version;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithVersion:(id)arg1 schemaVersion:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)schemaVersion;
- (void)setVendorsByVendorID:(id)arg1;
- (id)vendorWithID:(id)arg1;
- (id)vendors;
- (id)vendorsByVendorID;
- (id)version;

@end

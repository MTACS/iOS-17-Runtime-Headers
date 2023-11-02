
@interface ASDScreenSyncAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {
    NSString * _accountName;
    NSString * _bundleID;
    NSNumber * _externalVersionIdentifier;
    NSNumber * _itemID;
    NSString * _itemName;
    NSNumber * _purchaserDSID;
    NSNumber * _storeFront;
    NSString * _vendorName;
}

@property (copy) NSString *accountName;
@property (readonly) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *externalVersionIdentifier;
@property (readonly) unsigned long long hash;
@property (copy) NSNumber *itemID;
@property (copy) NSString *itemName;
@property (readonly) long long metadataType;
@property (copy) NSNumber *purchaserDSID;
@property (copy) NSNumber *storeFront;
@property (readonly) Class superclass;
@property (copy) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountName;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionIdentifier;
- (id)initWithBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemID;
- (id)itemName;
- (long long)metadataType;
- (id)purchaserDSID;
- (void)setAccountName:(id)arg1;
- (void)setExternalVersionIdentifier:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setPurchaserDSID:(id)arg1;
- (void)setStoreFront:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)storeFront;
- (id)vendorName;

@end

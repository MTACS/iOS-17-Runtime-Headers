
@interface ASDWatchAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appleID;
    NSString * _bundleID;
    NSNumber * _downloaderID;
    NSNumber * _externalVersionID;
    NSNumber * _itemID;
    NSNumber * _previousExternalVersionID;
    NSString * _previousVariantID;
    NSNumber * _purchaserID;
    NSString * _redownloadParams;
    bool  _skipIfInstalled;
    bool  _userInitiated;
}

@property (copy) NSString *altDSID;
@property (copy) NSString *appleID;
@property (copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *downloaderID;
@property (copy) NSNumber *externalVersionID;
@property (readonly) unsigned long long hash;
@property (copy) NSNumber *itemID;
@property (readonly) long long metadataType;
@property (copy) NSNumber *previousExternalVersionID;
@property (copy) NSString *previousVariantID;
@property (copy) NSNumber *purchaserID;
@property (copy) NSString *redownloadParams;
@property bool skipIfInstalled;
@property (readonly) Class superclass;
@property (getter=isUserInitiated) bool userInitiated;

+ (id)metadataFromStoreMetadata:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)appleID;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloaderID;
- (void)encodeWithCoder:(id)arg1;
- (id)externalVersionID;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (id)initWithItemID:(id)arg1 externalVersionID:(id)arg2;
- (id)initWithStoreMetadata:(id)arg1;
- (bool)isUserInitiated;
- (id)itemID;
- (long long)metadataType;
- (id)previousExternalVersionID;
- (id)previousVariantID;
- (id)purchaserID;
- (id)redownloadParams;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDownloaderID:(id)arg1;
- (void)setExternalVersionID:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setPreviousExternalVersionID:(id)arg1;
- (void)setPreviousVariantID:(id)arg1;
- (void)setPurchaserID:(id)arg1;
- (void)setRedownloadParams:(id)arg1;
- (void)setSkipIfInstalled:(bool)arg1;
- (void)setUserInitiated:(bool)arg1;
- (bool)skipIfInstalled;

@end

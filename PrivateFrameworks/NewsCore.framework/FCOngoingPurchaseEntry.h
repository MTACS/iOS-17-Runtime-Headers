
@interface FCOngoingPurchaseEntry : NSObject {
    NSNumber * _appAdamID;
    NSString * _bundleID;
    NSString * _identifier;
    NSNumber * _price;
    NSString * _productID;
    NSString * _purchaseID;
    NSDate * _purchaseInitiatedTime;
    NSNumber * _storeExternalVersion;
    NSString * _tagID;
    NSString * _vendorIdentifier;
    bool  _webAccessOptIn;
}

@property (nonatomic, copy) NSNumber *appAdamID;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSNumber *price;
@property (nonatomic, copy) NSString *productID;
@property (nonatomic, copy) NSString *purchaseID;
@property (nonatomic, copy) NSDate *purchaseInitiatedTime;
@property (nonatomic, copy) NSNumber *storeExternalVersion;
@property (nonatomic, copy) NSString *tagID;
@property (nonatomic, copy) NSString *vendorIdentifier;
@property (nonatomic) bool webAccessOptIn;

+ (id)dummyOngoingPurchaseEntryWithTagID:(id)arg1;

- (void).cxx_destruct;
- (id)appAdamID;
- (id)bundleID;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 productID:(id)arg4 bundleID:(id)arg5 webAccessOptIn:(bool)arg6 appAdamID:(id)arg7 storeExternalVersion:(id)arg8 vendorIdentifier:(id)arg9 purchaseInitiatedTime:(id)arg10 price:(id)arg11;
- (id)price;
- (id)productID;
- (id)purchaseID;
- (id)purchaseInitiatedTime;
- (void)setAppAdamID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setProductID:(id)arg1;
- (void)setPurchaseID:(id)arg1;
- (void)setPurchaseInitiatedTime:(id)arg1;
- (void)setStoreExternalVersion:(id)arg1;
- (void)setTagID:(id)arg1;
- (void)setVendorIdentifier:(id)arg1;
- (void)setWebAccessOptIn:(bool)arg1;
- (id)storeExternalVersion;
- (id)tagID;
- (id)vendorIdentifier;
- (bool)webAccessOptIn;

@end


@interface MSDStoreInfo : NSObject {
    NSString * _appleID;
    NSString * _companyName;
    bool  _confirmStoreSelection;
    NSString * _confirmationCode;
    NSString * _fullAddress;
    bool  _isHQ;
    bool  _isNearby;
    NSString * _storeDescription;
    CLLocation * _storeLocation;
    NSString * _storeName;
}

@property (nonatomic, readonly) NSString *appleID;
@property (nonatomic, readonly) NSString *companyName;
@property (nonatomic, readonly) bool confirmStoreSelection;
@property (nonatomic, readonly) NSString *confirmationCode;
@property (nonatomic, readonly) NSString *fullAddress;
@property (nonatomic, readonly) bool isHQ;
@property (nonatomic, readonly) bool isNearby;
@property (nonatomic, readonly) NSString *storeDescription;
@property (nonatomic, readonly) CLLocation *storeLocation;
@property (nonatomic, readonly) NSString *storeName;

- (void).cxx_destruct;
- (id)_buildFullAddress:(id)arg1;
- (id)_buildStoreDescription:(id)arg1;
- (id)_localizedCapitalizedTrimmedString:(id)arg1;
- (id)appleID;
- (id)companyName;
- (bool)confirmStoreSelection;
- (id)confirmationCode;
- (id)description;
- (id)fullAddress;
- (id)initWithDict:(id)arg1;
- (bool)isHQ;
- (bool)isNearby;
- (id)storeDescription;
- (id)storeLocation;
- (id)storeName;

@end

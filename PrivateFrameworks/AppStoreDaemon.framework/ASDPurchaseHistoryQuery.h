
@interface ASDPurchaseHistoryQuery : NSObject <NSSecureCoding> {
    long long  _accountID;
    NSArray * _bundleIDs;
    long long  _currentlyOptedInForMacOSEligibility;
    long long  _currentlyOptedInForXROSEligibility;
    long long  _isFirstParty;
    long long  _isHidden;
    long long  _isPreorder;
    long long  _optedInForMacOSEligibility;
    long long  _optedInForXROSEligibility;
    NSString * _searchTerm;
    NSArray * _sortOptions;
    NSArray * _storeIDs;
    long long  _supportsRealityDevice;
}

@property long long accountID;
@property (copy) NSArray *bundleIDs;
@property long long currentlyOptedInForMacOSEligibility;
@property long long currentlyOptedInForXROSEligibility;
@property long long isFirstParty;
@property long long isHidden;
@property long long isIOSBinaryMacOSCompatible;
@property long long isPreorder;
@property long long optedInForMacOSEligibility;
@property long long optedInForXROSEligibility;
@property (copy) NSString *searchTerm;
@property (copy) NSArray *sortOptions;
@property (copy) NSArray *storeIDs;
@property long long supportsRealityDevice;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)accountID;
- (id)bundleIDs;
- (long long)currentlyOptedInForMacOSEligibility;
- (long long)currentlyOptedInForXROSEligibility;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)isFirstParty;
- (long long)isHidden;
- (long long)isIOSBinaryMacOSCompatible;
- (long long)isPreorder;
- (long long)optedInForMacOSEligibility;
- (long long)optedInForXROSEligibility;
- (id)searchTerm;
- (void)setAccountID:(long long)arg1;
- (void)setBundleIDs:(id)arg1;
- (void)setCurrentlyOptedInForMacOSEligibility:(long long)arg1;
- (void)setCurrentlyOptedInForXROSEligibility:(long long)arg1;
- (void)setIsFirstParty:(long long)arg1;
- (void)setIsHidden:(long long)arg1;
- (void)setIsIOSBinaryMacOSCompatible:(long long)arg1;
- (void)setIsPreorder:(long long)arg1;
- (void)setOptedInForMacOSEligibility:(long long)arg1;
- (void)setOptedInForXROSEligibility:(long long)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setSortOptions:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setSupportsRealityDevice:(long long)arg1;
- (id)sortOptions;
- (id)storeIDs;
- (long long)supportsRealityDevice;

@end


@interface ICQQuotaInfoResponse : AAResponse {
    NSDictionary * _accountStatus;
    bool  _basicAccount;
    bool  _detailed;
    NSArray * _otherToolbarItems;
    PSQuotaInfo * _quotaInfo;
    NSDictionary * _quotaInfoDict;
    NSDictionary * _storageInfo;
    NSArray * _topToolbarItems;
    NSDictionary * _urls;
}

@property (nonatomic, readonly) NSDictionary *accountStatus;
@property (nonatomic, readonly) NSString *appDetailsURLString;
@property (nonatomic, readonly) NSString *availableStorageText;
@property (getter=isDetailed, nonatomic, readonly) bool detailed;
@property (nonatomic, readonly) NSString *manageStorageURLString;
@property (nonatomic, readonly, retain) PSQuotaInfo *quotaInfo;
@property (nonatomic, readonly) NSString *totalStorageText;

- (void).cxx_destruct;
- (id)_sizeStringFromBytes:(id)arg1;
- (id)accountStatus;
- (id)appDetailsURLString;
- (unsigned long long)availableStorage;
- (id)availableStorageText;
- (bool)hasPurchasedMoreStorage;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (bool)isDetailed;
- (id)manageStorageURLString;
- (id)quotaInfo;
- (id)storageFooter:(bool)arg1;
- (unsigned long long)totalStorage;
- (id)totalStorageText;
- (unsigned long long)usedStorage;

@end

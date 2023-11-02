
@interface BMiCloudSubscription : BMEventBase <BMStoreData> {
    long long  _bundleQuotaInBytes;
    long long  _commerceQuotaInBytes;
    int  _displayEntry;
    bool  _hasBundleQuotaInBytes;
    bool  _hasCommerceQuotaInBytes;
    bool  _hasMlServerScore;
    bool  _hasTotalAvailable;
    bool  _hasTotalQuota;
    bool  _hasTotalUsed;
    int  _iCloudSubscriptionEventType;
    double  _mlServerScore;
    long long  _totalAvailable;
    long long  _totalQuota;
    long long  _totalUsed;
}

@property (nonatomic, readonly) long long bundleQuotaInBytes;
@property (nonatomic, readonly) long long commerceQuotaInBytes;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int displayEntry;
@property (nonatomic) bool hasBundleQuotaInBytes;
@property (nonatomic) bool hasCommerceQuotaInBytes;
@property (nonatomic) bool hasMlServerScore;
@property (nonatomic) bool hasTotalAvailable;
@property (nonatomic) bool hasTotalQuota;
@property (nonatomic) bool hasTotalUsed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int iCloudSubscriptionEventType;
@property (nonatomic, readonly) double mlServerScore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalAvailable;
@property (nonatomic, readonly) long long totalQuota;
@property (nonatomic, readonly) long long totalUsed;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (long long)bundleQuotaInBytes;
- (long long)commerceQuotaInBytes;
- (unsigned int)dataVersion;
- (id)description;
- (int)displayEntry;
- (bool)hasBundleQuotaInBytes;
- (bool)hasCommerceQuotaInBytes;
- (bool)hasMlServerScore;
- (bool)hasTotalAvailable;
- (bool)hasTotalQuota;
- (bool)hasTotalUsed;
- (int)iCloudSubscriptionEventType;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithMlServerScore:(id)arg1 totalQuota:(id)arg2 totalUsed:(id)arg3 totalAvailable:(id)arg4 bundleQuotaInBytes:(id)arg5 commerceQuotaInBytes:(id)arg6 iCloudSubscriptionEventType:(int)arg7;
- (id)initWithMlServerScore:(id)arg1 totalQuota:(id)arg2 totalUsed:(id)arg3 totalAvailable:(id)arg4 bundleQuotaInBytes:(id)arg5 commerceQuotaInBytes:(id)arg6 iCloudSubscriptionEventType:(int)arg7 displayEntry:(int)arg8;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (double)mlServerScore;
- (id)serialize;
- (void)setHasBundleQuotaInBytes:(bool)arg1;
- (void)setHasCommerceQuotaInBytes:(bool)arg1;
- (void)setHasMlServerScore:(bool)arg1;
- (void)setHasTotalAvailable:(bool)arg1;
- (void)setHasTotalQuota:(bool)arg1;
- (void)setHasTotalUsed:(bool)arg1;
- (long long)totalAvailable;
- (long long)totalQuota;
- (long long)totalUsed;
- (void)writeTo:(id)arg1;

@end

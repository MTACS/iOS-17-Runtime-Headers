
@interface DDSAssetPolicy : NSObject <NSSecureCoding> {
    NSString * _downloadCompletionNotification;
    bool  _downloadOverCellular;
    bool  _downloadWithoutPower;
    NSDateComponents * _idleUsageEvictionPeriod;
    NSSet * _notificationDownloadTriggers;
    long long  _preferredDownloadFrequency;
}

@property (nonatomic, copy) NSString *downloadCompletionNotification;
@property (nonatomic) bool downloadOverCellular;
@property (nonatomic) bool downloadWithoutPower;
@property (nonatomic, retain) NSDateComponents *idleUsageEvictionPeriod;
@property (nonatomic, copy) NSSet *notificationDownloadTriggers;
@property (nonatomic) long long preferredDownloadFrequency;

+ (id)assetPolicy;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)downloadCompletionNotification;
- (bool)downloadOverCellular;
- (bool)downloadWithoutPower;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idleUsageEvictionPeriod;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAssetPolicy:(id)arg1;
- (id)notificationDownloadTriggers;
- (long long)preferredDownloadFrequency;
- (void)setDownloadCompletionNotification:(id)arg1;
- (void)setDownloadOverCellular:(bool)arg1;
- (void)setDownloadWithoutPower:(bool)arg1;
- (void)setIdleUsageEvictionPeriod:(id)arg1;
- (void)setNotificationDownloadTriggers:(id)arg1;
- (void)setPreferredDownloadFrequency:(long long)arg1;
- (id)stringForAssetDownloadFrequency:(long long)arg1;

@end

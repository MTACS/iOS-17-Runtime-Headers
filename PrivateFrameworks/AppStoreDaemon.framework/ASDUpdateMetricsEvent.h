
@interface ASDUpdateMetricsEvent : NSObject <NSSecureCoding> {
    NSNumber * _available;
    NSNumber * _discovery;
    NSNumber * _downloadComplete;
    NSNumber * _downloadStart;
    NSNumber * _installComplete;
    NSNumber * _installStart;
    NSNumber * _purchaseComplete;
    NSNumber * _purchaseStart;
}

@property (nonatomic, copy) NSNumber *available;
@property (nonatomic, copy) NSNumber *discovery;
@property (nonatomic, copy) NSNumber *downloadComplete;
@property (nonatomic, copy) NSNumber *downloadStart;
@property (nonatomic, copy) NSNumber *installComplete;
@property (nonatomic, copy) NSNumber *installStart;
@property (nonatomic, copy) NSNumber *purchaseComplete;
@property (nonatomic, copy) NSNumber *purchaseStart;

+ (id)relativeMetricsKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)available;
- (id)discovery;
- (id)downloadComplete;
- (id)downloadStart;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)installComplete;
- (id)installStart;
- (id)purchaseComplete;
- (id)purchaseStart;
- (void)setAvailable:(id)arg1;
- (void)setDiscovery:(id)arg1;
- (void)setDownloadComplete:(id)arg1;
- (void)setDownloadStart:(id)arg1;
- (void)setInstallComplete:(id)arg1;
- (void)setInstallStart:(id)arg1;
- (void)setPurchaseComplete:(id)arg1;
- (void)setPurchaseStart:(id)arg1;

@end

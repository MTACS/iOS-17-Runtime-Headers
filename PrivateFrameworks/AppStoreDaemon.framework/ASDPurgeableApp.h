
@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSString * _purgeableReason;
    long long  _purgeableType;
    long long  _staticDiskUsage;
    NSNumber * _storeItemID;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, copy) NSString *purgeableReason;
@property (nonatomic) long long purgeableType;
@property (nonatomic) long long staticDiskUsage;
@property (nonatomic, copy) NSNumber *storeItemID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)diagnosticDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)purgeableReason;
- (long long)purgeableType;
- (void)setBundleID:(id)arg1;
- (void)setPurgeableReason:(id)arg1;
- (void)setPurgeableType:(long long)arg1;
- (void)setStaticDiskUsage:(long long)arg1;
- (void)setStoreItemID:(id)arg1;
- (long long)staticDiskUsage;
- (id)storeItemID;

@end

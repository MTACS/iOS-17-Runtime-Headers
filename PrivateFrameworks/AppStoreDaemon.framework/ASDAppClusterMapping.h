
@interface ASDAppClusterMapping : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleID;
    NSNumber * _clusterID;
    NSNumber * _clusterVersion;
    NSNumber * _itemID;
    NSNumber * _launchesWeight;
    NSNumber * _usageWeight;
}

@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSNumber *clusterID;
@property (nonatomic, copy) NSNumber *clusterVersion;
@property (nonatomic, copy) NSNumber *itemID;
@property (nonatomic, copy) NSNumber *launchesWeight;
@property (nonatomic, copy) NSNumber *usageWeight;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleID;
- (id)clusterID;
- (id)clusterVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemID;
- (id)launchesWeight;
- (void)setBundleID:(id)arg1;
- (void)setClusterID:(id)arg1;
- (void)setClusterVersion:(id)arg1;
- (void)setItemID:(id)arg1;
- (void)setLaunchesWeight:(id)arg1;
- (void)setUsageWeight:(id)arg1;
- (id)usageWeight;

@end

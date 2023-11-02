
@interface DTCPUClusterInfo : NSObject <NSSecureCoding> {
    unsigned long long  _clusterFlags;
    unsigned long long  _clusterID;
}

@property (nonatomic, readonly) unsigned long long clusterFlags;
@property (nonatomic, readonly) unsigned long long clusterID;
@property (nonatomic, readonly) bool isEfficiencyCore;
@property (nonatomic, readonly) bool isPerformanceCore;

+ (bool)supportsSecureCoding;

- (unsigned long long)clusterFlags;
- (unsigned long long)clusterID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClusterID:(unsigned long long)arg1 flags:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEfficiencyCore;
- (bool)isPerformanceCore;

@end

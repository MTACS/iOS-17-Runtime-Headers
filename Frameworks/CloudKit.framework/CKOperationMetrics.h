
@interface CKOperationMetrics : NSObject <NSCopying, NSSecureCoding> {
    CKMetric * _MMCSMetrics;
    CKMetric * _cloudKitMetrics;
}

@property (nonatomic, readonly, copy) CKMetric *MMCSMetrics;
@property (nonatomic, readonly, copy) CKMetric *cloudKitMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCSMetrics;
- (id)cloudKitMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCloudKitMetrics:(id)arg1 MMCSMetrics:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

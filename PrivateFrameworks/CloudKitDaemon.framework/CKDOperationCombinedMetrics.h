
@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding> {
    CKDOperationMetrics * _MMCSMetrics;
    CKDOperationMetrics * _cloudKitMetrics;
}

@property (nonatomic, readonly, copy) CKDOperationMetrics *MMCSMetrics;
@property (nonatomic, readonly, copy) CKDOperationMetrics *cloudKitMetrics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCSMetrics;
- (id)cloudKitMetrics;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCloudKitMetrics:(id)arg1 andMMCSMetrics:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

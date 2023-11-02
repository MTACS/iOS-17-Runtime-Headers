
@interface C2MetricOperationGroupOptions : NSObject <NSSecureCoding> {
    NSString * _operationGroupId;
    NSString * _operationGroupName;
}

@property (nonatomic, copy) NSString *operationGroupId;
@property (nonatomic, copy) NSString *operationGroupName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)operationGroupId;
- (id)operationGroupName;
- (void)setOperationGroupId:(id)arg1;
- (void)setOperationGroupName:(id)arg1;

@end

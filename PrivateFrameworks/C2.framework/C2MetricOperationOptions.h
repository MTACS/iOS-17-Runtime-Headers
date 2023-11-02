
@interface C2MetricOperationOptions : NSObject <NSSecureCoding> {
    C2MetricOperationGroupOptions * _operationGroup;
    NSString * _operationId;
    NSString * _operationType;
}

@property (nonatomic, copy) C2MetricOperationGroupOptions *operationGroup;
@property (nonatomic, copy) NSString *operationId;
@property (nonatomic, copy) NSString *operationType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)operationGroup;
- (id)operationId;
- (id)operationType;
- (void)setOperationGroup:(id)arg1;
- (void)setOperationId:(id)arg1;
- (void)setOperationType:(id)arg1;

@end

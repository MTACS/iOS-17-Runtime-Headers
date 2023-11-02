
@interface CKEventOperationInfo : NSObject <NSSecureCoding> {
    NSString * _operationGroupID;
    NSString * _operationID;
    NSString * _operationType;
}

@property (nonatomic, readonly, copy) NSString *operationGroupID;
@property (nonatomic, readonly, copy) NSString *operationID;
@property (nonatomic, readonly, copy) NSString *operationType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)operationGroupID;
- (id)operationID;
- (id)operationType;

@end

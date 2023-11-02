
@interface CKEventOperationGroupInfo : NSObject <NSSecureCoding> {
    NSString * _operationGroupID;
    NSString * _operationGroupName;
}

@property (nonatomic, readonly, copy) NSString *operationGroupID;
@property (nonatomic, readonly, copy) NSString *operationGroupName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)operationGroupID;
- (id)operationGroupName;

@end

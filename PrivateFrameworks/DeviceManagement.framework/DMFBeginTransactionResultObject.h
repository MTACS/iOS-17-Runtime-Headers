
@interface DMFBeginTransactionResultObject : CATTaskResultObject {
    NSUUID * _UUID;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;

@end

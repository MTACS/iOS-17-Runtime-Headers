
@interface DSFileOperationID : NSObject <DSHashableEquatable, NSSecureCoding> {
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)uuid;

@end

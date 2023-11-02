
@interface HKContributor : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSString * _appleID;
    NSString * _callerID;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly, copy) NSString *callerID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_initWithUUID:(id)arg1 appleID:(id)arg2 callerID:(id)arg3;
- (id)appleID;
- (id)callerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

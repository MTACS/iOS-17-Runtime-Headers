
@interface CKMultiValueMergeableDeltaRegisterState : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSData * _salt;
    CKDistributedTimestampStateVector * _vector;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) NSData *salt;
@property (nonatomic, readonly) CKDistributedTimestampStateVector *vector;

+ (id)newSalt;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 vector:(id)arg2 salt:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)salt;
- (id)vector;

@end

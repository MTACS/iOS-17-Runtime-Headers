
@interface AKTrustedContact : NSObject <NSCopying, NSSecureCoding> {
    NSString * _hashedWrappingKeyRKC;
    long long  _status;
    NSUUID * _uuid;
}

@property (nonatomic, copy) NSString *hashedWrappingKeyRKC;
@property (nonatomic) long long status;
@property (nonatomic, copy) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hashedWrappingKeyRKC;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 status:(long long)arg2;
- (void)setHashedWrappingKeyRKC:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setUuid:(id)arg1;
- (long long)status;
- (id)uuid;

@end

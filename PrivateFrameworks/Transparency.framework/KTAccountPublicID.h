
@interface KTAccountPublicID : NSObject <NSCopying, NSSecureCoding> {
    NSString * _publicID;
    struct _PCSPublicIdentityData { } * _publicIdentity;
}

@property (readonly) NSString *ktStorageString;
@property (readonly) NSString *publicAccountIdentity;
@property (readonly) NSString *publicAccountPKI;
@property (retain) NSString *publicID;
@property (readonly) NSData *publicKeyInfo;

+ (id)encodePublicKeyInfoDigestSuffix:(id)arg1;
+ (id)ktAccountPublicIDWithPKIString:(id)arg1 error:(id*)arg2;
+ (id)ktAccountPublicIDWithPublicKeyInfo:(id)arg1 error:(id*)arg2;
+ (id)ktAccountPublicIDWithStorageString:(id)arg1 error:(id*)arg2;
+ (id)ktAccountPublicIDWithString:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPublicKeyIdentity:(id)arg1 error:(id*)arg2;
- (id)initWithPublicKeyInfo:(id)arg1 error:(id*)arg2;
- (id)initWithStorageString:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)ktStorageString;
- (id)publicAccountIdentity;
- (id)publicAccountPKI;
- (id)publicID;
- (id)publicKeyInfo;
- (void)setPublicID:(id)arg1;

@end

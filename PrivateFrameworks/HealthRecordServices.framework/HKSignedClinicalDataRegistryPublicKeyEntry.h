
@interface HKSignedClinicalDataRegistryPublicKeyEntry : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _added;
    NSData * _jwk;
    NSString * _kid;
    NSDate * _removed;
    NSString * _source;
}

@property (nonatomic, readonly, copy) NSDate *added;
@property (nonatomic, readonly, copy) NSData *jwk;
@property (nonatomic, readonly, copy) NSString *kid;
@property (nonatomic, readonly, copy) NSDate *removed;
@property (nonatomic, readonly, copy) NSString *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)added;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyID:(id)arg1 added:(id)arg2 removed:(id)arg3 source:(id)arg4 jwkData:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jwk;
- (id)kid;
- (id)removed;
- (id)source;

@end

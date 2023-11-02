
@interface HKSignedClinicalDataRegistryPublicKeyFetchResult : NSObject <NSCopying, NSSecureCoding> {
    NSData * _jwkData;
    NSString * _kid;
    unsigned long long  _outcome;
}

@property (nonatomic, readonly, copy) NSData *jwkData;
@property (nonatomic, readonly, copy) NSString *kid;
@property (nonatomic, readonly) unsigned long long outcome;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyID:(id)arg1 outcome:(unsigned long long)arg2 jwkData:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)jwkData;
- (id)kid;
- (unsigned long long)outcome;

@end

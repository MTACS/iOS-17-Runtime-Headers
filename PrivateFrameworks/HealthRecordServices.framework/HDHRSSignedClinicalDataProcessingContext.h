
@interface HDHRSSignedClinicalDataProcessingContext : NSObject <NSCopying, NSSecureCoding> {
    NSData * _JWKSData;
    unsigned long long  _JWKSOutcome;
    NSString * _issuerIdentifier;
    NSDictionary * _metadata;
    NSData * _rawData;
    NSString * _signingKeyID;
    long long  _sourceType;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly, copy) NSData *JWKSData;
@property (nonatomic, readonly) unsigned long long JWKSOutcome;
@property (nonatomic, readonly, copy) NSString *issuerIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSData *rawData;
@property (nonatomic, readonly, copy) NSString *signingKeyID;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly, copy) NSURL *sourceURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JWKSData;
- (unsigned long long)JWKSOutcome;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawData:(id)arg1 sourceType:(long long)arg2 sourceURL:(id)arg3 issuerIdentifier:(id)arg4 signingKeyID:(id)arg5 JWKSData:(id)arg6 JWKSOutcome:(unsigned long long)arg7 metadata:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)issuerIdentifier;
- (id)metadata;
- (id)rawData;
- (id)signingKeyID;
- (long long)sourceType;
- (id)sourceURL;

@end

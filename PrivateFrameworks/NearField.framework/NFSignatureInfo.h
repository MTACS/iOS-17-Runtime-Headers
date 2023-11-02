
@interface NFSignatureInfo : NSObject <NSSecureCoding> {
    unsigned long long  _certificateVersion;
    NSString * _eccCert;
    NSString * _eckaCert;
    NSString * _jsblCounter;
    NSString * _platformId;
    NSString * _rsaCert;
    NSString * _seid;
}

@property (nonatomic, readonly) unsigned long long certificateVersion;
@property (nonatomic, readonly, retain) NSString *eccCert;
@property (nonatomic, readonly, retain) NSString *eckaCert;
@property (nonatomic, readonly, retain) NSString *jsblCounter;
@property (nonatomic, readonly, retain) NSString *platformId;
@property (nonatomic, readonly, retain) NSString *rsaCert;
@property (nonatomic, readonly, retain) NSString *seid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)certificateVersion;
- (id)description;
- (id)eccCert;
- (id)eckaCert;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)jsblCounter;
- (id)platformId;
- (id)rsaCert;
- (id)seid;

@end

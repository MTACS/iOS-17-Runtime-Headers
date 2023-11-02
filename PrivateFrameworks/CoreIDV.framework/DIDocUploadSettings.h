
@interface DIDocUploadSettings : NSObject <NSSecureCoding> {
    bool  _base64EncodingEnabled;
    NSArray * _certificateChain;
    long long  _container;
    NSString * _encryptionVersion;
    NSString * _recipient;
}

@property (nonatomic, readonly) bool base64EncodingEnabled;
@property (nonatomic, readonly) NSArray *certificateChain;
@property (nonatomic, readonly) long long container;
@property (nonatomic, readonly) NSString *encryptionVersion;
@property (nonatomic, readonly) NSString *recipient;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)base64EncodingEnabled;
- (id)certificateChain;
- (long long)container;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionVersion;
- (id)initWithCertificateChain:(id)arg1 container:(long long)arg2 recipient:(id)arg3 encryptionVersion:(id)arg4;
- (id)initWithCertificateChain:(id)arg1 container:(long long)arg2 recipient:(id)arg3 encryptionVersion:(id)arg4 base64EncodingEnabled:(bool)arg5;
- (id)initWithCertificateChain:(id)arg1 recipient:(id)arg2 encryptionVersion:(id)arg3;
- (id)initWithCertificateChain:(id)arg1 recipient:(id)arg2 encryptionVersion:(id)arg3 base64EncodingEnabled:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainer:(long long)arg1;
- (id)recipient;

@end

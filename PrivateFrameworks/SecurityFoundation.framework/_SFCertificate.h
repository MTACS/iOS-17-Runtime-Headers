
@interface _SFCertificate : NSObject {
    id  _certificateInternal;
}

@property (nonatomic, readonly) long long certificateType;
@property (nonatomic, readonly) NSString *issuerName;
@property (nonatomic, readonly) struct __SecCertificate { }*secCertificate;
@property (nonatomic, readonly) NSData *serialNumber;
@property (nonatomic, readonly) NSString *subject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)certificateType;
- (id)initWithSecCertificate:(struct __SecCertificate { }*)arg1;
- (id)issuerName;
- (struct __SecCertificate { }*)secCertificate;
- (id)serialNumber;
- (id)subject;

@end


@interface MCCertificatePayload : MCPayload {
    NSString * _certIssuer;
    NSString * _certSubject;
    NSData * _certificatePersistentID;
    NSNumber * _expiryInterval;
    NSString * _installedOnDeviceID;
    NSNumber * _isIdentity;
    NSNumber * _isRoot;
}

@property (nonatomic, readonly) NSString *SMIMEEmailAddress;
@property (nonatomic, retain) NSData *certificatePersistentID;
@property (nonatomic, readonly, retain) NSDate *expiry;
@property (nonatomic, copy) NSString *installedOnDeviceID;
@property (nonatomic, readonly) bool isFullyTrustedRootCert;
@property (nonatomic, readonly) bool isHardwareBound;
@property (nonatomic, readonly) bool isIdentity;
@property (nonatomic, readonly) bool isMDMClientIdentity;
@property (nonatomic, readonly) bool isRoot;
@property (nonatomic, readonly) bool isSigned;

- (void).cxx_destruct;
- (id)SMIMEEmailAddress;
- (id)certificatePersistentID;
- (id)certificateSubject;
- (struct __SecCertificate { }*)copyCertificate;
- (struct __SecIdentity { }*)copyIdentityFromKeychain;
- (id)expiry;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installedOnDeviceID;
- (bool)isFullyTrustedRootCert;
- (bool)isHardwareBound;
- (bool)isIdentity;
- (bool)isMDMClientIdentity;
- (bool)isRoot;
- (bool)isSigned;
- (id)issuer;
- (void)setCertificatePersistentID:(id)arg1;
- (void)setInstalledOnDeviceID:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;
- (id)verboseDescription;

@end

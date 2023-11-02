
@interface PKPeerPaymentWebServiceContext : PKWebServiceContext {
    NSString * _companionSerialNumber;
    bool  _devSigned;
    NSString * _deviceIdentifier;
    NSString * _pushToken;
    NSString * _pushTopic;
    NSURL * _serviceURL;
    NSData * _signedEnrollmentDataSignature;
}

@property (nonatomic, readonly, copy) NSString *companionSerialNumber;
@property (nonatomic) bool devSigned;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSString *pushToken;
@property (nonatomic, readonly, copy) NSString *pushTopic;
@property (nonatomic, readonly, copy) NSURL *serviceURL;
@property (nonatomic, copy) NSData *signedEnrollmentDataSignature;

+ (id)contextWithArchive:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)companionSerialNumber;
- (bool)devSigned;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pushToken;
- (id)pushTopic;
- (id)serviceURL;
- (void)setDevSigned:(bool)arg1;
- (void)setPushToken:(id)arg1;
- (void)setSignedEnrollmentDataSignature:(id)arg1;
- (id)signedEnrollmentDataSignature;
- (void)updateContextWithDeviceRegistrationData:(id)arg1 registrationResponse:(id)arg2;

@end
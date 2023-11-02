
@interface ACCHWComponentAuthServiceParams : NSObject {
    unsigned int  _authFlags;
    NSData * _certificate;
    NSDictionary * _certificateInfo;
    NSData * _challenge;
    NSData * _deviceNonce;
    unsigned int  _moduleAuthService;
    NSData * _signature;
}

@property (nonatomic) unsigned int authFlags;
@property (nonatomic, retain) NSData *certificate;
@property (nonatomic, retain) NSDictionary *certificateInfo;
@property (nonatomic, retain) NSData *challenge;
@property (nonatomic, retain) NSData *deviceNonce;
@property (nonatomic) unsigned int moduleAuthService;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (unsigned int)authFlags;
- (id)certificate;
- (id)certificateInfo;
- (id)challenge;
- (id)deviceNonce;
- (unsigned int)moduleAuthService;
- (void)setAuthFlags:(unsigned int)arg1;
- (void)setCertificate:(id)arg1;
- (void)setCertificateInfo:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setDeviceNonce:(id)arg1;
- (void)setModuleAuthService:(unsigned int)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end


@interface CDPDRemoteSecretValidationResult : NSObject {
    CDPLocalSecret * _cachedSecretForReenrollment;
    CDPDevice * _device;
    OTClique * _recoveredClique;
    NSDictionary * _recoveredInfo;
    unsigned long long  _secretType;
    bool  _userDidCancel;
    bool  _userDidReset;
    NSString * _validSecret;
}

@property (nonatomic, copy) CDPLocalSecret *cachedSecretForReenrollment;
@property (nonatomic, copy) CDPDevice *device;
@property (nonatomic, retain) OTClique *recoveredClique;
@property (nonatomic, copy) NSDictionary *recoveredInfo;
@property (nonatomic) unsigned long long secretType;
@property (nonatomic) bool userDidCancel;
@property (nonatomic) bool userDidReset;
@property (nonatomic, copy) NSString *validSecret;

- (void).cxx_destruct;
- (id)cachedSecretForReenrollment;
- (id)device;
- (id)recoveredClique;
- (id)recoveredInfo;
- (unsigned long long)secretType;
- (void)setCachedSecretForReenrollment:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setRecoveredClique:(id)arg1;
- (void)setRecoveredInfo:(id)arg1;
- (void)setSecretType:(unsigned long long)arg1;
- (void)setUserDidCancel:(bool)arg1;
- (void)setUserDidReset:(bool)arg1;
- (void)setValidSecret:(id)arg1;
- (bool)userDidCancel;
- (bool)userDidReset;
- (id)validSecret;

@end

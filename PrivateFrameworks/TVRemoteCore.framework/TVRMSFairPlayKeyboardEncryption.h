
@interface TVRMSFairPlayKeyboardEncryption : NSObject {
    bool  _certIsTrusted;
    NSData * _challenge;
    struct __SecKey { } * _pubKeyRef;
}

- (void).cxx_destruct;
- (id)_convertDataToString:(id)arg1;
- (id)_convertStringToData:(id)arg1;
- (bool)_verifyCert:(id)arg1;
- (void)dealloc;
- (id)encryptString:(id)arg1;
- (bool)isTrusted;
- (void)reset;
- (void)setChallengeString:(id)arg1;
- (void)setLeafString:(id)arg1;

@end


@interface MSDecodeOptions : NSObject {
    NSData * _LAContext;
    NSArray * _additionalCertificates;
    NSArray * _anchorCertificates;
    struct __SecIdentity { } * _identity;
    NSData * _key;
    NSArray * _signerPolicies;
    bool  _verifySignatures;
    bool  _verifySigners;
    NSDate * _verifyTime;
}

@property (retain) NSData *LAContext;
@property (retain) NSArray *additionalCertificates;
@property (retain) NSArray *anchorCertificates;
@property struct __SecIdentity { }*identity;
@property (retain) NSData *key;
@property (retain) NSArray *signerPolicies;
@property bool verifySignatures;
@property bool verifySigners;
@property (retain) NSDate *verifyTime;

- (void).cxx_destruct;
- (id)LAContext;
- (id)additionalCertificates;
- (id)anchorCertificates;
- (void)dealloc;
- (struct __SecIdentity { }*)identity;
- (id)init;
- (id)initWithDecryptionIdentity:(struct __SecIdentity { }*)arg1;
- (id)initWithDecryptionKey:(id)arg1;
- (id)key;
- (void)setAdditionalCertificates:(id)arg1;
- (void)setAnchorCertificates:(id)arg1;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (void)setKey:(id)arg1;
- (void)setLAContext:(id)arg1;
- (void)setSignerPolicies:(id)arg1;
- (void)setVerifySignatures:(bool)arg1;
- (void)setVerifySigners:(bool)arg1;
- (void)setVerifyTime:(id)arg1;
- (id)signerPolicies;
- (bool)verifySignatures;
- (bool)verifySigners;
- (id)verifyTime;

@end

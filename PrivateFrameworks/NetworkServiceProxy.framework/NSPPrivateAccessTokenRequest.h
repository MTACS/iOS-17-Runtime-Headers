
@interface NSPPrivateAccessTokenRequest : NSObject {
    NSData * _blindedRequest;
    unsigned char  _configKeyID;
    NSData * _encryptedTokenRequest;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _ephemeralPrivateKey;
    struct cchpke_initiator { struct cchpke_params {} *x1; struct cchpke_context { unsigned char x_2_1_1[88]; } x2; } * _hpkeContext;
    NSData * _hpkeEnc;
    unsigned short  _issuerAEADID;
    NSData * _issuerEncapKey;
    NSData * _issuerEncapKeyID;
    unsigned short  _issuerKDFID;
    unsigned short  _issuerKEMID;
    NSString * _originName;
    NSData * _requestData;
    NSData * _requestKey;
    NSData * _requestSignature;
    unsigned short  _tokenType;
    unsigned char  _truncatedTokenKeyID;
}

- (void).cxx_destruct;
- (void)dealloc;

@end

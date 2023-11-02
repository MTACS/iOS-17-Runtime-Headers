
@interface AMSMediaACI : NSObject {
    void aci;
    void aciSignature;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  expirationTimeStamp;
    void keyID;
    void r;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  resetTimeStamp;
}

- (void).cxx_destruct;
- (id)init;

@end

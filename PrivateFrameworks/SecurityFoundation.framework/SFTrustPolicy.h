
@interface SFTrustPolicy : NSObject <NSCopying> {
    id  _trustPolicyInternal;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)evaluateCertificateChain:(id)arg1 error:(id*)arg2;

@end

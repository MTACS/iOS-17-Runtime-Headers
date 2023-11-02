
@interface AMSAttestation : NSObject

+ (id)_attestationPListWithStyle:(unsigned long long)arg1 primaryAttestation:(id)arg2 extendedAttestation:(id)arg3 error:(id*)arg4;
+ (id)_generateCertificateChainStringsForOptions:(id)arg1 error:(id*)arg2;
+ (id)attestationHTTPBodyDataWithStyle:(unsigned long long)arg1 regenerateKeys:(bool)arg2 error:(id*)arg3;
+ (id)attestationWithOptions:(id)arg1 error:(id*)arg2;

@end

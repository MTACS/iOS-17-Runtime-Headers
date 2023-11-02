
@interface ECDKIMVerifier : NSObject

- (id)_base64HashBodyData:(id)arg1 usingSignature:(id)arg2;
- (id)_relaxedCanonicalizationForHeaderName:(id)arg1 headerBody:(id)arg2;
- (void)canonicalizeBodyDataUsingRelaxedAlgorithm:(id)arg1;
- (void)canonicalizeBodyDataUsingSimpleAlgorithm:(id)arg1;
- (id)canonicalizeHeaders:(id)arg1 usingRelaxedAlgorithmWithSignatureHeader:(id)arg2;
- (id)canonicalizeHeaders:(id)arg1 usingSimpleAlgorithmWithSignatureHeader:(id)arg2;
- (id)verificationContextForMessageData:(id)arg1 error:(id*)arg2;
- (bool)verifyMessageBodyData:(id)arg1 withContext:(id)arg2 usingSignature:(id)arg3;
- (bool)verifyMessageData:(id)arg1;
- (bool)verifyMessageData:(id)arg1 publicKeySource:(id)arg2 options:(long long)arg3;
- (bool)verifyMessageHeaders:(id)arg1 usingSignature:(id)arg2 publicKeySource:(id)arg3 error:(out id*)arg4;
- (bool)verifyMessageWithContext:(id)arg1 options:(long long)arg2 error:(out id*)arg3;
- (bool)verifyMessageWithContext:(id)arg1 publicKeySource:(id)arg2 options:(long long)arg3 error:(out id*)arg4;

@end

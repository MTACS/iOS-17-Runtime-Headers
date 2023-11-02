
@interface MICodeSigningVerifier : NSObject {
    bool  _allowAdhocSigning;
    MIExecutableBundle * _bundle;
    bool  _logResourceVerificationErrors;
    bool  _performOnlineAuthorization;
    MICodeSigningInfo * _signingInfo;
    bool  _skipProfileIDValidation;
    bool  _validateResources;
    bool  _validateUsingDetachedSignature;
    bool  _verifyTrustCachePresence;
}

@property (nonatomic) bool allowAdhocSigning;
@property (nonatomic, readonly) MIExecutableBundle *bundle;
@property (nonatomic) bool logResourceVerificationErrors;
@property (nonatomic) bool performOnlineAuthorization;
@property (nonatomic, readonly) MICodeSigningInfo *signingInfo;
@property (nonatomic) bool skipProfileIDValidation;
@property (nonatomic) bool validateResources;
@property (nonatomic) bool validateUsingDetachedSignature;
@property (nonatomic) bool verifyTrustCachePresence;

+ (bool)_validateBundleExecutable:(id)arg1 againstStubAt:(id)arg2 trustedHashes:(id)arg3 sectionName:(id)arg4 signingIdentifier:(id)arg5 error:(id*)arg6;
+ (id)_validateSignatureAndCopyInfoForURL:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
+ (bool)_validateStubSignature:(id)arg1 withSigningID:(id)arg2 error:(id*)arg3;
+ (id)codeSigningVerifierForBundle:(id)arg1;
+ (bool)validateWatchKitV1StubExecutableBundle:(id)arg1 error:(id*)arg2;
+ (bool)validateWatchKitV2StubExecutableBundle:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)_getMICodeSignerTypeFromMISInfoDict:(id)arg1 codeSignerType:(unsigned long long*)arg2 profileType:(unsigned long long*)arg3 error:(id*)arg4;
- (id)_loadSystemDetachedSignatureForBundleID:(id)arg1 error:(id*)arg2;
- (bool)allowAdhocSigning;
- (id)bundle;
- (id)initWithBundle:(id)arg1;
- (bool)logResourceVerificationErrors;
- (bool)performOnlineAuthorization;
- (bool)performValidationWithError:(id*)arg1;
- (void)setAllowAdhocSigning:(bool)arg1;
- (void)setLogResourceVerificationErrors:(bool)arg1;
- (void)setPerformOnlineAuthorization:(bool)arg1;
- (void)setSkipProfileIDValidation:(bool)arg1;
- (void)setValidateResources:(bool)arg1;
- (void)setValidateUsingDetachedSignature:(bool)arg1;
- (void)setVerifyTrustCachePresence:(bool)arg1;
- (id)signingInfo;
- (bool)skipProfileIDValidation;
- (bool)validateResources;
- (bool)validateUsingDetachedSignature;
- (bool)verifyTrustCachePresence;

@end

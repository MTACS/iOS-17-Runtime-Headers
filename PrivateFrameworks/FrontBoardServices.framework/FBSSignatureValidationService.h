
@interface FBSSignatureValidationService : NSObject <FBSApplicationTrustDataProvider> {
    bool  _authoritative;
    <_FBSMISInterfaceWrapper> * _misInterfaceWrapper;
}

@property (nonatomic) bool authoritative;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initWithMISInterfaceWrapper:(id)arg1;
- (void)_logTrustState:(unsigned long long)arg1 forApp:(id)arg2 reason:(id)arg3;
- (unsigned long long)_validateApp:(id)arg1;
- (bool)authoritative;
- (id)init;
- (void)setAuthoritative:(bool)arg1;
- (unsigned int)signatureVersionForApp:(id)arg1;
- (unsigned long long)trustStateForApplication:(id)arg1;

@end

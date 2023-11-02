
@interface HMDCameraParameterSelection : HMFObject <HMFLogging> {
    HMDCameraStreamSessionID * _sessionID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMDCameraStreamSessionID *sessionID;
@property (readonly) Class superclass;

+ (id)_selectedCryptoSuiteFromCameraCryptoSuites:(id)arg1;
+ (id)logCategory;
+ (id)selectedParametersFromPreferredParameters:(id)arg1 deviceSupportedParameters:(id)arg2 cameraSupportedParameters:(id)arg3 overriddenParameters:(id)arg4 parameterDescription:(id)arg5;
+ (id)selectedSRTPParametersFromCryptoSuites:(id)arg1;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)arg1;
- (id)logIdentifier;
- (id)sessionID;

@end

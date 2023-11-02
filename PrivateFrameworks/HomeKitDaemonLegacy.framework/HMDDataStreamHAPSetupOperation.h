
@interface HMDDataStreamHAPSetupOperation : HMDDataStreamSetupOperation <HMDDataStreamSetupOperationMTU> {
    unsigned long long  _maxControllerTransportMTU;
    long long  _sessionIdentifier;
}

@property (nonatomic, readonly) unsigned long long maxControllerTransportMTU;
@property (nonatomic) long long sessionIdentifier;

+ (id)logCategory;

- (void)_readRequiredTransportCharacteristics;
- (id)initWithAccessory:(id)arg1 queue:(id)arg2 logIdentifier:(id)arg3 transferManagementService:(id)arg4 maxControllerTransportMTU:(unsigned long long)arg5 setupOperationReadRequired:(bool)arg6;
- (unsigned long long)maxControllerTransportMTU;
- (void)processTransportSetupResponse:(id)arg1;
- (long long)sessionIdentifier;
- (void)setMaxControllerTransportMTU:(unsigned long long)arg1;
- (void)setSessionIdentifier:(long long)arg1;
- (void)startSetup;

@end

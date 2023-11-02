
@interface HMMTRAccessoryServerFactory : HMFObject {
    HMMTRAccessoryServerBrowser * _browser;
    <HAPKeyStore> * _keystore;
}

@property (nonatomic) HMMTRAccessoryServerBrowser *browser;
@property (nonatomic) <HAPKeyStore> *keystore;

+ (id)createHMMTRHAPServiceCommon:(id)arg1 characteristics:(id)arg2 serviceLabelIndex:(id)arg3 serviceInstanceID:(id)arg4 endpointID:(id)arg5 nodeID:(id)arg6 topology:(id)arg7 clusterIDCharacteristicMap:(id)arg8 linkedServices:(id)arg9;
+ (id)createHMMTRHAPServiceLabelServiceWithEndpointID:(id)arg1 nodeID:(id)arg2;
+ (id)createInfoService:(id)arg1 model:(id)arg2 manufacturer:(id)arg3 serialNumber:(id)arg4 instanceID:(long long)arg5 endpointID:(id)arg6;
+ (id)createInfoService:(id)arg1 model:(id)arg2 manufacturer:(id)arg3 serialNumber:(id)arg4 instanceID:(unsigned long long)arg5 endpointID:(id)arg6 nodeID:(id)arg7 legacyInstanceIDAssignment:(bool)arg8;
+ (id)instanceIDForCharacteristicType:(id)arg1 serviceType:(id)arg2 endpointID:(id)arg3 nodeID:(id)arg4;
+ (id)logCategory;

- (void).cxx_destruct;
- (id)browser;
- (id)initWithKeystore:(id)arg1 browser:(id)arg2;
- (id)keystore;
- (id)logIdentifier;
- (void)setBrowser:(id)arg1;
- (void)setKeystore:(id)arg1;
- (id)vendAccessoryServerWithNodeID:(id)arg1 setupCode:(id)arg2 discriminator:(id)arg3 category:(id)arg4 vendorID:(id)arg5 productID:(id)arg6 serialNumber:(id)arg7 firmwareRevision:(id)arg8;

@end

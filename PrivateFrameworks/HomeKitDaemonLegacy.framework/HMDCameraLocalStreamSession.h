
@interface HMDCameraLocalStreamSession : HMDCameraStreamSession <HMFLogging> {
    HMDCameraNetworkConfig * _localNetworkConfig;
    HMDCameraMediaParameterSelection * _parameterSelection;
    <HMDCameraRemoteStreamSenderProtocol> * _streamSender;
    unsigned long long  _streamState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDCameraNetworkConfig *localNetworkConfig;
@property (retain) HMDCameraMediaParameterSelection *parameterSelection;
@property (readonly) <HMDCameraRemoteStreamSenderProtocol> *streamSender;
@property unsigned long long streamState;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (bool)containsState:(long long)arg1;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 reachabilityPath:(unsigned long long)arg2 streamSender:(id)arg3 remoteCapabilities:(id)arg4 localNetworkConfig:(id)arg5 streamPreference:(id)arg6;
- (id)localNetworkConfig;
- (id)logIdentifier;
- (id)parameterSelection;
- (void)setParameterSelection:(id)arg1;
- (void)setStreamState:(unsigned long long)arg1;
- (id)stateAsString;
- (id)streamSender;
- (unsigned long long)streamState;
- (void)updateState:(long long)arg1;

@end

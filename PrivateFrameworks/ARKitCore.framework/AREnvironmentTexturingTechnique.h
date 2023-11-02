
@interface AREnvironmentTexturingTechnique : ARTechnique {
    bool  _networkIntialized;
    NSObject<OS_dispatch_queue> * _networkPrewarmQueue;
    NSObject<OS_dispatch_queue> * _planeUpdateQueue;
    ARPlaneWorld * _planeWorld;
    AREnvironmentProbeManager * _probeManager;
    ARImageData * _ultraWide;
    NSObject<OS_dispatch_semaphore> * _ultraWideSemaphore;
    bool  _wantsHDREnvironmentTextures;
}

@property bool networkIntialized;
@property (retain) AREnvironmentProbeManager *probeManager;
@property (readonly) bool wantsHDREnvironmentTextures;

+ (bool)producesResultDataForAnchorOfClass:(Class)arg1;

- (void).cxx_destruct;
- (id)_fullDescription;
- (id)initWithOptions:(long long)arg1 wantsHDREnvironmentTextures:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)networkIntialized;
- (void)prepare:(bool)arg1;
- (id)probeManager;
- (id)processData:(id)arg1;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (void)setNetworkIntialized:(bool)arg1;
- (void)setProbeManager:(id)arg1;
- (bool)wantsHDREnvironmentTextures;

@end

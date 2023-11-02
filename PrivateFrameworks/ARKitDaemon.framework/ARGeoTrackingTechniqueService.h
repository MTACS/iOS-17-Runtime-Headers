
@interface ARGeoTrackingTechniqueService : ARTechniqueService <ARRemoteGeoTrackingTechniqueService> {
    ARDeviceOrientationData * _lastProcessedDeviceOrientationData;
    ARLocationData * _lastProcessedLocationData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serviceName;

- (void).cxx_destruct;
- (void)getLocationFromWorldPosition:(id)arg1 reply:(id /* block */)arg2;
- (id)initWithConnection:(id)arg1;
- (void)posteriorVisualLocalizationCallIntervalWithReply:(id /* block */)arg1;
- (id)processData:(id)arg1;
- (id)processDeviceOrientationData:(id)arg1;
- (id)processLocationData:(id)arg1;
- (void)setPosteriorVisualLocalizationCallInterval:(double)arg1;
- (void)setSupportEnablementOptions:(unsigned long long)arg1;
- (void)setVisualLocalizationCallInterval:(double)arg1;
- (void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1;
- (void)setVisualLocalizationUpdatesRequested:(bool)arg1;
- (void)supportEnablementOptionsWithReply:(id /* block */)arg1;
- (void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4;
- (void)visualLocalizationCallIntervalTimeThresholdWithReply:(id /* block */)arg1;
- (void)visualLocalizationCallIntervalWithReply:(id /* block */)arg1;
- (void)visualLocalizationUpdatesRequestedWithReply:(id /* block */)arg1;

@end

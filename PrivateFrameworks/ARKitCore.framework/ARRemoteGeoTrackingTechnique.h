
@interface ARRemoteGeoTrackingTechnique : ARRemoteTechnique <ARGeoTrackingTechniqueProtocol>

@property double bonusLatency;
@property <ARTechniqueDelegate> *delegate;
@property double posteriorVisualLocalizationCallInterval;
@property unsigned long long powerUsage;
@property (retain) <ARTechniqueForwardingStrategy> *splitTechniqueFowardingStrategy;
@property (retain) NSArray *splitTechniques;
@property unsigned long long supportEnablementOptions;
@property (readonly) NSNumber *traceKey;
@property double visualLocalizationCallInterval;
@property double visualLocalizationCallIntervalTimeThreshold;
@property bool visualLocalizationUpdatesRequested;

+ (id)new;

- (void)getLocationFromWorldPosition:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 1: id*
- (id)init;
- (id)initWithServerConnection:(id)arg1;
- (double)posteriorVisualLocalizationCallInterval;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (unsigned long long)requiredSensorDataTypes;
- (void)setPosteriorVisualLocalizationCallInterval:(double)arg1;
- (void)setSupportEnablementOptions:(unsigned long long)arg1;
- (void)setVisualLocalizationCallInterval:(double)arg1;
- (void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1;
- (void)setVisualLocalizationUpdatesRequested:(bool)arg1;
- (unsigned long long)supportEnablementOptions;
- (double)visualLocalizationCallInterval;
- (double)visualLocalizationCallIntervalTimeThreshold;
- (bool)visualLocalizationUpdatesRequested;

@end

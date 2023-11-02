
@protocol ARGeoTrackingTechniqueProtocol <ARTechniqueProtocol>

@required

- (id)getLocationFromWorldPositionerror;
- (double)posteriorVisualLocalizationCallInterval;
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

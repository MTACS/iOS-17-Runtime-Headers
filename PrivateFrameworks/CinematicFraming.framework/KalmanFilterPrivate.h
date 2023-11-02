
@interface KalmanFilterPrivate : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _covarianceEstimate;
    bool  _isFirstObservation;
    float  _measurementNoise;
    void _noiseBase;
    void _noiseScaling;
    float  _observationMean;
    float  _observationMeanSquared;
    void _observationModel;
    float  _previousAcceleration;
    float  _previousObservation;
    float  _previousVelocity;
    void _stateEstimate;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _stateTransitionModel;
    float  _trailingAlpha;
}

@property (nonatomic) float measurementNoise;
@property (nonatomic) float trailingAlpha;

- (void)_predict;
- (void)_update:(float)arg1;
- (void)addObservation:(float)arg1;
- (float)covariance;
- (float)estimatedObservation;
- (id)init;
- (float)measurementNoise;
- (void)setMeasurementNoise:(float)arg1;
- (void)setTrailingAlpha:(float)arg1;
- (float)trailingAlpha;

@end

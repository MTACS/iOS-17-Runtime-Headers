
@interface TCMPSInstanceNormDataLoaderProps : NSObject {
    <MTLBuffer> * _betaBuffer;
    <MTLBuffer> * _betaMomentumBuffer;
    MPSVector * _betaMomentumVector;
    MPSVector * _betaVector;
    <MTLBuffer> * _betaVelocityBuffer;
    MPSVector * _betaVelocityVector;
    <MTLBuffer> * _gammaBuffer;
    <MTLBuffer> * _gammaMomentumBuffer;
    MPSVector * _gammaMomentumVector;
    MPSVector * _gammaVector;
    <MTLBuffer> * _gammaVelocityBuffer;
    MPSVector * _gammaVelocityVector;
    <MTLBuffer> * _movingMeanBuffer;
    <MTLBuffer> * _movingVarianceBuffer;
    MPSCNNNormalizationGammaAndBetaState * _state;
}

@property (nonatomic, retain) <MTLBuffer> *betaBuffer;
@property (nonatomic, retain) <MTLBuffer> *betaMomentumBuffer;
@property (nonatomic, retain) MPSVector *betaMomentumVector;
@property (nonatomic, retain) MPSVector *betaVector;
@property (nonatomic, retain) <MTLBuffer> *betaVelocityBuffer;
@property (nonatomic, retain) MPSVector *betaVelocityVector;
@property (nonatomic, retain) <MTLBuffer> *gammaBuffer;
@property (nonatomic, retain) <MTLBuffer> *gammaMomentumBuffer;
@property (nonatomic, retain) MPSVector *gammaMomentumVector;
@property (nonatomic, retain) MPSVector *gammaVector;
@property (nonatomic, retain) <MTLBuffer> *gammaVelocityBuffer;
@property (nonatomic, retain) MPSVector *gammaVelocityVector;
@property (nonatomic, retain) <MTLBuffer> *movingMeanBuffer;
@property (nonatomic, retain) <MTLBuffer> *movingVarianceBuffer;
@property (nonatomic, retain) MPSCNNNormalizationGammaAndBetaState *state;

- (void).cxx_destruct;
- (id)betaBuffer;
- (id)betaMomentumBuffer;
- (id)betaMomentumVector;
- (id)betaVector;
- (id)betaVelocityBuffer;
- (id)betaVelocityVector;
- (id)gammaBuffer;
- (id)gammaMomentumBuffer;
- (id)gammaMomentumVector;
- (id)gammaVector;
- (id)gammaVelocityBuffer;
- (id)gammaVelocityVector;
- (id)movingMeanBuffer;
- (id)movingVarianceBuffer;
- (void)setBetaBuffer:(id)arg1;
- (void)setBetaMomentumBuffer:(id)arg1;
- (void)setBetaMomentumVector:(id)arg1;
- (void)setBetaVector:(id)arg1;
- (void)setBetaVelocityBuffer:(id)arg1;
- (void)setBetaVelocityVector:(id)arg1;
- (void)setGammaBuffer:(id)arg1;
- (void)setGammaMomentumBuffer:(id)arg1;
- (void)setGammaMomentumVector:(id)arg1;
- (void)setGammaVector:(id)arg1;
- (void)setGammaVelocityBuffer:(id)arg1;
- (void)setGammaVelocityVector:(id)arg1;
- (void)setMovingMeanBuffer:(id)arg1;
- (void)setMovingVarianceBuffer:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end

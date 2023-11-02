
@interface TTKDefaultContinuousPathGenerator : NSObject <TTKContinuousPathGenerator> {
    double  _acceleration;
    double  _betaParam;
    double  _fingerKeyWdithMultiple;
    double  _force;
    bool  _genMidPoint;
    double  _midPointDevKeyHeightMultiple;
    double  _midPointKeyWidthMultiple;
    double  _normalKeyWidthMultiple;
    double  _timeDelta;
    NSString * _touchTimingAlgorithm;
    double  _velocity;
    void * m_gamma_distribution;
    void * m_generator;
    void * m_normal_distribution;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double force;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property double timeDelta;
@property double velocity;

+ (id)pathGeneratorWithAttributes:(id)arg1;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })addPoint:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)boxPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)canHandleDoubleLetter;
- (void)dealloc;
- (double)distanceBetween:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2;
- (double)dotProduct:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2;
- (double)force;
- (id)generateAngularTiming:(id)arg1;
- (id)generateEquidistantTiming:(id)arg1;
- (id)generateInflections:(id)arg1;
- (id)generateKeyCentersFromKeys:(id)arg1 string:(id)arg2 layout:(id)arg3;
- (id)generateKeysFromString:(id)arg1 layout:(id)arg2;
- (id)generatePathFromInflectionPoints:(id)arg1 segmentTiming:(id)arg2 keys:(id)arg3 string:(id)arg4 layout:(id)arg5;
- (id)generatePathFromInflectionPoints:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 segmentTiming:(id)arg4 keys:(id)arg5 string:(id)arg6 layout:(id)arg7;
- (id)generatePathFromInflectionPoints:(id)arg1 timestamp:(double)arg2 segmentTiming:(id)arg3 keys:(id)arg4 string:(id)arg5 layout:(id)arg6;
- (id)generatePathFromString:(id)arg1 layout:(id)arg2;
- (id)generatePathFromString:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 layout:(id)arg4;
- (id)generatePathFromString:(id)arg1 timestamp:(double)arg2 layout:(id)arg3;
- (id)generateTimingArray:(id)arg1;
- (id)init;
- (id)initWithParams:(id)arg1;
- (double)randomNumberFromBetaDistribution;
- (double)randomNumberFromNormalDistribution;
- (void)reset;
- (struct CGPoint { double x1; double x2; })scalarMultiplyPoint:(struct CGPoint { double x1; double x2; })arg1 by:(double)arg2;
- (void)setForce:(double)arg1;
- (void)setRandomNumberSeed:(unsigned int)arg1;
- (void)setTimeDelta:(double)arg1;
- (void)setVelocity:(double)arg1;
- (struct CGPoint { double x1; double x2; })subtractPoint:(struct CGPoint { double x1; double x2; })arg1 byPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGPoint { double x1; double x2; })targetDeviatedNormallyFromPoint:(struct CGPoint { double x1; double x2; })arg1 withKeyWidth:(double)arg2;
- (double)timeDelta;
- (double)velocity;

@end


@interface CMViewObstructedStateEvent : NSObject {
    unsigned char  _currentState;
    float  _lux;
    NSArray * _meanProbabilities;
    NSString * _motionType;
    NSString * _orientation;
    float  _pocketProbability;
    bool  _shouldSuppress;
}

@property (nonatomic) unsigned char currentState;
@property (nonatomic) float lux;
@property (nonatomic, retain) NSArray *meanProbabilities;
@property (nonatomic, copy) NSString *motionType;
@property (nonatomic, copy) NSString *orientation;
@property (nonatomic) float pocketProbability;
@property (nonatomic) bool shouldSuppress;

- (unsigned char)currentState;
- (void)dealloc;
- (id)description;
- (id)initWithShouldSupress:(bool)arg1 currentState:(unsigned char)arg2 orientation:(id)arg3 motionType:(id)arg4 lux:(float)arg5 pocketProbability:(float)arg6 meanProbabilitiesFloatArray:(id)arg7;
- (float)lux;
- (id)meanProbabilities;
- (id)motionType;
- (id)orientation;
- (float)pocketProbability;
- (void)setCurrentState:(unsigned char)arg1;
- (void)setLux:(float)arg1;
- (void)setMeanProbabilities:(id)arg1;
- (void)setMotionType:(id)arg1;
- (void)setOrientation:(id)arg1;
- (void)setPocketProbability:(float)arg1;
- (void)setShouldSuppress:(bool)arg1;
- (bool)shouldSuppress;

@end

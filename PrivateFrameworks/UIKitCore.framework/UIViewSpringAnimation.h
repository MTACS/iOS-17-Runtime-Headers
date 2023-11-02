
@interface UIViewSpringAnimation : NSObject <UIIntervalAnimating> {
    <UIVectorOperatable> * _current;
    <UIVectorOperatable> * _distance;
    <UIVectorOperatable> * _epsilon;
    <UIVectorOperatable> * _intermediate;
    <UIVectorOperatable> * _intermediateVelocity;
    struct { 
        struct { 
            double targetValue; 
            double tension; 
            double friction; 
            long long displacementFunction; 
        } dampingRatioParameters; 
        struct { 
            double targetValue; 
            double tension; 
            double friction; 
            long long displacementFunction; 
        } responseParameters; 
        struct { 
            double targetValue; 
            double tension; 
            double friction; 
            long long displacementFunction; 
        } targetParameters; 
        bool dampingRatioSmoothingDisabled; 
        bool responseSmoothingDisabled; 
        bool targetSmoothingDisabled; 
    }  _parameters;
    bool  _parametersInitialized;
    <UIVectorOperatable> * _scaledVelocity;
    struct { 
        struct { 
            double value; 
            double velocity; 
        } dampingRatioState; 
        struct { 
            double value; 
            double velocity; 
        } responseState; 
        double tension; 
        double friction; 
    }  _state;
    <UIVectorOperatable> * _targetValue;
    <UIVectorOperatable> * _value;
    <UIVectorOperatable> * _velocity;
    float  _velocityScalingFactor;
    <UIVectorOperatable> * _zero;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIVectorOperatable> *intermediate;
@property (nonatomic, retain) <UIVectorOperatable> *intermediateVelocity;
@property (readonly) Class superclass;
@property (nonatomic, retain) <UIVectorOperatable> *targetValue;
@property (nonatomic, retain) <UIVectorOperatable> *value;
@property (nonatomic, retain) <UIVectorOperatable> *velocity;

- (void).cxx_destruct;
- (id)initWithCurrent:(id)arg1 targetValue:(id)arg2;
- (id)initWithDescription:(id)arg1 current:(id)arg2 targetValue:(id)arg3;
- (id)intermediate;
- (id)intermediateVelocity;
- (bool)isStable;
- (void)setIntermediate:(id)arg1;
- (void)setIntermediateVelocity:(id)arg1;
- (void)setTargetValue:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setVelocity:(id)arg1;
- (id)stepWithDelta:(double)arg1;
- (id)targetValue;
- (void)updateWithDescription:(id)arg1;
- (void)updateWithDescription:(id)arg1 initial:(bool)arg2;
- (id)value;
- (id)velocity;

@end

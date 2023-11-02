
@interface _REUIControllerTrainingContext : REUITrainingContext {
    <_REUIControllerTrainingContextDelegate> * _delegate;
    double  _maximumNegativeDwellTime;
    double  _minimumPositiveDwellTime;
    unsigned long long  _onScreenElementCount;
}

@property (nonatomic) <_REUIControllerTrainingContextDelegate> *delegate;
@property (nonatomic) double maximumNegativeDwellTime;
@property (nonatomic) double minimumPositiveDwellTime;
@property (nonatomic) unsigned long long onScreenElementCount;

- (void).cxx_destruct;
- (id)delegate;
- (bool)elementIsAvailable:(id)arg1;
- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;
- (id)interactionTypeForElement:(id)arg1;
- (double)maximumNegativeDwellTime;
- (double)minimumPositiveDwellTime;
- (unsigned long long)onScreenElementCount;
- (void)setDelegate:(id)arg1;
- (void)setMaximumNegativeDwellTime:(double)arg1;
- (void)setMinimumPositiveDwellTime:(double)arg1;
- (void)setOnScreenElementCount:(unsigned long long)arg1;

@end

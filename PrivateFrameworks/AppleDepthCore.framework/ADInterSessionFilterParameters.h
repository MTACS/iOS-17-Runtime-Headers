
@interface ADInterSessionFilterParameters : NSObject {
    unsigned int  _capacity;
    bool  _isStepDetectionActive;
    float  _maximalWeight;
    unsigned int  _minStepIndex;
    unsigned int  _minStepSize;
    unsigned int  _minimalEntriesForResult;
    float  _minimalWeight;
    unsigned int  _outlierNumber;
    float  _outlierWeight;
    float  _stepDetectionThreshold;
}

@property (nonatomic) unsigned int capacity;
@property (nonatomic) bool isStepDetectionActive;
@property (nonatomic) float maximalWeight;
@property (nonatomic) unsigned int minStepIndex;
@property (nonatomic) unsigned int minStepSize;
@property (nonatomic) unsigned int minimalEntriesForResult;
@property (nonatomic) float minimalWeight;
@property (nonatomic) unsigned int outlierNumber;
@property (nonatomic) float outlierWeight;
@property (nonatomic) float stepDetectionThreshold;

- (unsigned int)capacity;
- (id)init;
- (bool)isStepDetectionActive;
- (float)maximalWeight;
- (unsigned int)minStepIndex;
- (unsigned int)minStepSize;
- (unsigned int)minimalEntriesForResult;
- (float)minimalWeight;
- (unsigned int)outlierNumber;
- (float)outlierWeight;
- (void)setCapacity:(unsigned int)arg1;
- (void)setIsStepDetectionActive:(bool)arg1;
- (void)setMaximalWeight:(float)arg1;
- (void)setMinStepIndex:(unsigned int)arg1;
- (void)setMinStepSize:(unsigned int)arg1;
- (void)setMinimalEntriesForResult:(unsigned int)arg1;
- (void)setMinimalWeight:(float)arg1;
- (void)setOutlierNumber:(unsigned int)arg1;
- (void)setOutlierWeight:(float)arg1;
- (void)setStepDetectionThreshold:(float)arg1;
- (float)stepDetectionThreshold;

@end

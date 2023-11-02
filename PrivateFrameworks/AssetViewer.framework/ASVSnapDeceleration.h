
@interface ASVSnapDeceleration : ASVDeceleration {
    float  _currentOffset;
    float  _maxOffset;
    float  _minOffset;
}

@property (nonatomic) float currentOffset;
@property (nonatomic) float maxOffset;
@property (nonatomic) float minOffset;

- (void)calculateSnapFromStartingOffset:(float)arg1 startingVelocity:(float)arg2 deltaTime:(float)arg3 outOffset:(float*)arg4 outVelocity:(float*)arg5;
- (float)currentOffset;
- (float)decelerationDelta;
- (id)initWithVelocity:(float)arg1 minEndDelta:(float)arg2 startingOffset:(float)arg3 minOffset:(float)arg4 maxOffset:(float)arg5;
- (float)maxOffset;
- (float)minOffset;
- (void)setCurrentOffset:(float)arg1;
- (void)setMaxOffset:(float)arg1;
- (void)setMinOffset:(float)arg1;

@end

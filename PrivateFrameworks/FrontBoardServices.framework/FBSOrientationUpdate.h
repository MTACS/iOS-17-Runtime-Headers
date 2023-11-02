
@interface FBSOrientationUpdate : NSObject {
    double  _duration;
    long long  _orientation;
    long long  _rotationDirection;
    unsigned long long  _sequenceNumber;
}

@property (nonatomic) double duration;
@property (nonatomic) long long orientation;
@property (nonatomic) long long rotationDirection;
@property (nonatomic) unsigned long long sequenceNumber;

- (id)description;
- (double)duration;
- (id)init;
- (id)initWithOrientation:(long long)arg1 sequenceNumber:(unsigned long long)arg2 duration:(double)arg3 rotationDirection:(long long)arg4;
- (long long)orientation;
- (long long)rotationDirection;
- (unsigned long long)sequenceNumber;
- (void)setDuration:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setRotationDirection:(long long)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;

@end

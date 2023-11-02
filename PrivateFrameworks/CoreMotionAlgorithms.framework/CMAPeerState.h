
@interface CMAPeerState : NSObject {
    unsigned int  _motionState;
    double  _timestamp;
}

@property (nonatomic) unsigned int motionState;
@property (nonatomic) double timestamp;

- (unsigned int)motionState;
- (void)setMotionState:(unsigned int)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end

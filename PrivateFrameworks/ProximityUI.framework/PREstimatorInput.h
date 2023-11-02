
@interface PREstimatorInput : NSObject {
    double  _priorTimestamp;
    PRRoseSolution * _proximity;
    struct { 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*vector; 
    }  _rotation;
    double  _subsequentTimestamp;
    double  _timestamp;
    void _translation;
}

@property (nonatomic) double priorTimestamp;
@property (nonatomic, retain) PRRoseSolution *proximity;
@property (nonatomic) struct { } rotation;
@property (nonatomic) double subsequentTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) void translation;

- (void).cxx_destruct;
- (double)priorTimestamp;
- (id)proximity;
- (struct { })rotation;
- (void)setPriorTimestamp:(double)arg1;
- (void)setProximity:(id)arg1;
- (void)setRotation:(struct { })arg1;
- (void)setSubsequentTimestamp:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTranslation;
- (double)subsequentTimestamp;
- (double)timestamp;
- (void)translation;

@end

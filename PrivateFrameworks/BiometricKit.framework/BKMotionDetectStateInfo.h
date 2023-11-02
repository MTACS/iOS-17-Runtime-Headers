
@interface BKMotionDetectStateInfo : NSObject {
    NSArray * _motionMatrix;
}

@property (nonatomic, retain) NSArray *motionMatrix;

- (void).cxx_destruct;
- (id)initWithMotionMatrix:(id)arg1;
- (id)motionMatrix;
- (void)setMotionMatrix:(id)arg1;

@end


@interface BKFaceDetectOperation : BKPresenceDetectOperation {
    bool  _eyeRelief;
    bool  _highPriority;
    long long  _mode;
    bool  _motionDetect;
    double  _timeout;
}

@property (nonatomic) <BKFaceDetectOperationDelegate> *delegate;
@property (nonatomic) bool eyeRelief;
@property (nonatomic) bool highPriority;
@property (nonatomic) long long mode;
@property (nonatomic) bool motionDetect;
@property (nonatomic) double timeout;

- (bool)eyeRelief;
- (bool)highPriority;
- (id)initWithDevice:(id)arg1;
- (long long)mode;
- (bool)motionDetect;
- (void)setEyeRelief:(bool)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setMode:(long long)arg1;
- (void)setMotionDetect:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (void)startBioOperation:(bool)arg1 reply:(id /* block */)arg2;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (double)timeout;

@end


@interface CMAWatchOrientation : NSObject {
    int  _crown;
    double  _timestamp;
    int  _wrist;
}

@property (nonatomic) int crown;
@property (nonatomic) double timestamp;
@property (nonatomic) int wrist;

- (int)crown;
- (void)setCrown:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setWrist:(int)arg1;
- (double)timestamp;
- (int)wrist;

@end

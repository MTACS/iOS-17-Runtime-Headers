
@interface TVRUITouchEvent : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitizerLocation;
    long long  _fingerIndex;
    double  _timestamp;
    long long  _touchPhase;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } digitizerLocation;
@property (nonatomic, readonly) long long fingerIndex;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long touchPhase;

- (struct CGPoint { double x1; double x2; })digitizerLocation;
- (long long)fingerIndex;
- (id)initWithTimestamp:(double)arg1 touchPhase:(long long)arg2 fingerIndex:(long long)arg3 digitizerLocation:(struct CGPoint { double x1; double x2; })arg4;
- (double)timestamp;
- (long long)touchPhase;

@end

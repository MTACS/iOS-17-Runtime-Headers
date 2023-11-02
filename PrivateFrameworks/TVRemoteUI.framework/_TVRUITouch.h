
@interface _TVRUITouch : NSObject {
    long long  _fingerIndex;
    long long  _phase;
    double  _timestamp;
}

@property (nonatomic, readonly) long long fingerIndex;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) double timestamp;

- (long long)fingerIndex;
- (id)initWithTimestamp:(double)arg1 touchPhase:(long long)arg2 fingerIndex:(long long)arg3;
- (long long)phase;
- (double)timestamp;

@end

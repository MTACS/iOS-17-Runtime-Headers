
@interface _UIMotionEffectEvent : NSObject {
    double  _timestamp;
}

@property (nonatomic, readonly) double timestamp;

- (id)copyWithTimestamp:(double)arg1;
- (id)initWithTimestamp:(double)arg1;
- (double)timestamp;
- (double)velocityRelativeToPreviousEvent:(id)arg1;

@end


@interface _UIRKEOTouchTracking : NSObject {
    Class  _beganGestureClass;
    double  _largestObservedRadius;
    long long  _type;
    bool  _valid;
}

@property (nonatomic, retain) Class beganGestureClass;
@property (nonatomic) double largestObservedRadius;
@property (nonatomic) long long type;
@property (nonatomic) bool valid;

- (void).cxx_destruct;
- (Class)beganGestureClass;
- (double)largestObservedRadius;
- (void)setBeganGestureClass:(Class)arg1;
- (void)setLargestObservedRadius:(double)arg1;
- (void)setType:(long long)arg1;
- (void)setValid:(bool)arg1;
- (long long)type;
- (bool)valid;

@end

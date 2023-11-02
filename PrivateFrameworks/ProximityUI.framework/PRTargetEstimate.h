
@interface PRTargetEstimate : NSObject {
    bool  _isVerticalResolved;
    double  _timestamp;
    float  _uncertainty;
    void _vector;
    unsigned long long  _verticalState;
    float  _weight;
}

@property (nonatomic, readonly) bool isVerticalResolved;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) float uncertainty;
@property (nonatomic, readonly) void vector;
@property (nonatomic, readonly) unsigned long long verticalState;
@property (nonatomic, readonly) float weight;

+ (id)targetEstimateWithTime:(void *)arg1 vector:(void *)arg2 uncertainty:(void *)arg3 weight:(void *)arg4 isResolved:(void *)arg5 verticalState:(void *)arg6; // needs 6 arg types, found 5: double, float, float, bool, unsigned long long

- (id)initWithTime:(void *)arg1 vector:(void *)arg2 uncertainty:(void *)arg3 weight:(void *)arg4 isResolved:(void *)arg5 verticalState:(void *)arg6; // needs 6 arg types, found 5: double, float, float, bool, unsigned long long
- (bool)isVerticalResolved;
- (double)timestamp;
- (float)uncertainty;
- (void)vector;
- (unsigned long long)verticalState;
- (float)weight;

@end

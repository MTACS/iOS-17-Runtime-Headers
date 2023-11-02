
@interface ATXCorrelatedEventsDateBuffer : NSObject {
    double  _bufferSeconds;
    long long  _bufferType;
}

@property (nonatomic, readonly) double bufferSeconds;
@property (nonatomic, readonly) long long bufferType;

- (double)bufferSeconds;
- (long long)bufferType;
- (id)endDateWithBufferForEvent:(id)arg1;
- (id)initWithBufferSeconds:(double)arg1 andBufferType:(long long)arg2;
- (id)startDateWithBufferForEvent:(id)arg1;

@end

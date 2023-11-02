
@protocol BRKAccelerationWriter <NSObject>

@required

- (void)close;
- (void)writeX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;

@end

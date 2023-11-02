
@interface WebGeolocationPosition : NSObject {
    WebGeolocationPositionInternal * _internal;
}

- (void)dealloc;
- (id)initWithGeolocationPosition:(void*)arg1;
- (id)initWithTimestamp:(double)arg1 latitude:(double)arg2 longitude:(double)arg3 accuracy:(double)arg4;

@end

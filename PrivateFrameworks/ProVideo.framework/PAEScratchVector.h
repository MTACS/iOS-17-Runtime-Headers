
@interface PAEScratchVector : NSObject {
    float  _endX;
    float  _endY;
    float  _x;
    float  _y;
}

- (id)initWithStartLocationX:(float)arg1 andY:(float)arg2 andEndLocationX:(float)arg3 andY:(float)arg4;
- (void)startLocationX:(float*)arg1 andY:(float*)arg2 andEndLocationX:(float*)arg3 andY:(float*)arg4;

@end

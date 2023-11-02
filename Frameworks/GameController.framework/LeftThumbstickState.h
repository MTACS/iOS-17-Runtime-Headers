
@interface LeftThumbstickState : NSObject {
    float  _down;
    float  _left;
    float  _right;
    float  _up;
}

@property float down;
@property float left;
@property float right;
@property float up;

- (float)down;
- (id)init;
- (float)left;
- (float)right;
- (void)setDown:(float)arg1;
- (void)setLeft:(float)arg1;
- (void)setRight:(float)arg1;
- (void)setUp:(float)arg1;
- (float)up;

@end

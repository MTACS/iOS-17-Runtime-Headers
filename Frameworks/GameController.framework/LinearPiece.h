
@interface LinearPiece : NSObject {
    float  _delta;
    float  _value;
}

@property float delta;
@property float value;

+ (id)pieceWithValue:(float)arg1 delta:(float)arg2;

- (float)delta;
- (id)init;
- (void)setDelta:(float)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end

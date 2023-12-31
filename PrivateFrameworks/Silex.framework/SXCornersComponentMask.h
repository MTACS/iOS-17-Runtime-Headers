
@interface SXCornersComponentMask : SXComponentMask

@property (nonatomic, readonly) bool bottomLeft;
@property (nonatomic, readonly) bool bottomRight;
@property (nonatomic, readonly) unsigned long long cornerMask;
@property (nonatomic, readonly) NSString *curve;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } radius;
@property (nonatomic, readonly) bool topLeft;
@property (nonatomic, readonly) bool topRight;

- (bool)bottomLeftWithValue:(id)arg1 withType:(int)arg2;
- (bool)bottomRightWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)cornerMask;
- (bool)cornerWithValue:(id)arg1 withType:(int)arg2;
- (id)curveWithValue:(id)arg1 withType:(int)arg2;
- (bool)topLeftWithValue:(id)arg1 withType:(int)arg2;
- (bool)topRightWithValue:(id)arg1 withType:(int)arg2;

@end

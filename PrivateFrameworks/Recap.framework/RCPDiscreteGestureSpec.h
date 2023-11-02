
@interface RCPDiscreteGestureSpec : NSObject {
    bool  _isRotation;
    bool  _isScale;
    bool  _isTranslation;
    double  _x;
    double  _y;
    double  _z;
}

@property (nonatomic) bool isRotation;
@property (nonatomic) bool isScale;
@property (nonatomic) bool isTranslation;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

+ (id)rotationZ:(double)arg1;
+ (id)scaleZ:(double)arg1;
+ (id)translation:(struct CGPoint { double x1; double x2; })arg1;

- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isRotation;
- (bool)isScale;
- (bool)isTranslation;
- (void)setIsRotation:(bool)arg1;
- (void)setIsScale:(bool)arg1;
- (void)setIsTranslation:(bool)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (void)setZ:(double)arg1;
- (double)x;
- (double)y;
- (double)z;

@end


@interface UIPointerAccessory : NSObject <NSCopying> {
    bool  _isArrowAccessory;
    bool  _orientationMatchesAngle;
    struct { 
        double offset; 
        double angle; 
    }  _position;
    UIPointerShape * _shape;
}

@property (nonatomic, readonly) bool _isArrowAccessory;
@property (nonatomic) bool orientationMatchesAngle;
@property (nonatomic) struct { double x1; double x2; } position;
@property (nonatomic, copy) UIPointerShape *shape;

+ (id)accessoryWithShape:(id)arg1 position:(struct { double x1; double x2; })arg2;
+ (id)arrowAccessoryWithPosition:(struct { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (bool)_isArrowAccessory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)orientationMatchesAngle;
- (struct { double x1; double x2; })position;
- (void)setOrientationMatchesAngle:(bool)arg1;
- (void)setPosition:(struct { double x1; double x2; })arg1;
- (void)setShape:(id)arg1;
- (id)shape;

@end

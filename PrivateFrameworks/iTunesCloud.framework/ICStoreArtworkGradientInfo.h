
@interface ICStoreArtworkGradientInfo : NSObject {
    struct CGColor { } * _color;
    double  _y1;
    double  _y2;
}

@property (nonatomic) struct CGColor { }*color;
@property (nonatomic) double y1;
@property (nonatomic) double y2;

- (struct CGColor { }*)color;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setY1:(double)arg1;
- (void)setY2:(double)arg1;
- (double)y1;
- (double)y2;

@end


@interface MPArtworkGradientInfo : NSObject {
    UIColor * _color;
    double  _y1;
    double  _y2;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double y1;
@property (nonatomic) double y2;

- (void).cxx_destruct;
- (id)color;
- (id)initWithColor:(id)arg1 y1:(double)arg2 y2:(double)arg3;
- (void)setColor:(id)arg1;
- (void)setY1:(double)arg1;
- (void)setY2:(double)arg1;
- (double)y1;
- (double)y2;

@end

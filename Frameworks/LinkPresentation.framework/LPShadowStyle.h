
@interface LPShadowStyle : NSObject {
    UIColor * _color;
    LPSize * _offset;
    double  _opacity;
    double  _radius;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) LPSize *offset;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

+ (id)cardHeadingIconShadow;
+ (id)collaborationPreviewShadow;

- (void).cxx_destruct;
- (id)color;
- (id)init;
- (id)offset;
- (double)opacity;
- (double)radius;
- (void)setColor:(id)arg1;
- (void)setOffset:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;

@end

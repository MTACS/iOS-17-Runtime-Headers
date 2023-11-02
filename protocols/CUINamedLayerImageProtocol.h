
@protocol CUINamedLayerImageProtocol <NSObject>

@required

- (int)blendMode;
- (bool)fixedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGImage { }*)image;
- (double)opacity;
- (double)scale;
- (void)setFixedFrame:(bool)arg1;

@end

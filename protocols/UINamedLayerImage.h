
@protocol UINamedLayerImage <NSObject>

@required

- (int)blendMode;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (NSString *)name;
- (double)opacity;

@optional

- (<UINamedLayerContentProvider> *)contentProvider;
- (bool)fixedFrame;
- (UIImage *)imageObj;
- (void)setFixedFrame:(bool)arg1;

@end

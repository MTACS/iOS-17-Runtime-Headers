
@protocol UINamedLayerStack <NSObject>

@required

- (struct CGImage { }*)flattenedImage;
- (NSArray *)layers;
- (NSString *)name;
- (double)scale;
- (struct CGSize { double x1; double x2; })size;

@optional

- (bool)flatImageContainsCornerRadius;
- (id)radiosityImage;
- (struct CGSize { double x1; double x2; })radiosityImageScale;

@end

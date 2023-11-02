
@interface PRXFeatureIcon : NSObject {
    UIView * _imageView;
    UIColor * _platterColor;
    double  _platterCornerRadius;
    double  _platterSize;
    NSString * _symbolName;
}

@property (nonatomic, readonly) UIView *imageView;
@property (nonatomic, retain) UIColor *platterColor;
@property (nonatomic) double platterCornerRadius;
@property (nonatomic) double platterSize;
@property (nonatomic, readonly, copy) NSString *symbolName;

- (void).cxx_destruct;
- (id)imageView;
- (id)initWithImage:(id)arg1;
- (id)initWithImageView:(id)arg1;
- (id)initWithSystemImageNamed:(id)arg1;
- (id)makeImageView;
- (id)platterColor;
- (double)platterCornerRadius;
- (double)platterSize;
- (void)setPlatterColor:(id)arg1;
- (void)setPlatterCornerRadius:(double)arg1;
- (void)setPlatterSize:(double)arg1;
- (id)symbolName;

@end

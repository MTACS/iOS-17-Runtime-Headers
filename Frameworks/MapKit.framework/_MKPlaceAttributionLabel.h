
@interface _MKPlaceAttributionLabel : NSObject {
    UIImage * image;
    double  imageBaselineOffset;
    NSString * imagePlaceholder;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) double imageBaselineOffset;
@property (nonatomic, retain) NSString *imagePlaceholder;

- (void).cxx_destruct;
- (id)attributionWithString:(id)arg1;
- (id)image;
- (double)imageBaselineOffset;
- (id)imagePlaceholder;
- (void)setImage:(id)arg1;
- (void)setImageBaselineOffset:(double)arg1;
- (void)setImagePlaceholder:(id)arg1;

@end

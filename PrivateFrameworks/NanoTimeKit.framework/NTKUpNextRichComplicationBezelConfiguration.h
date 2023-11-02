
@interface NTKUpNextRichComplicationBezelConfiguration : NTKUpNextComplicationConfiguration {
    UIImage * _maskImage;
    double  _radius;
}

@property (nonatomic, readonly) UIImage *maskImage;
@property (nonatomic, readonly) double radius;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaskImage:(id)arg1 radius:(double)arg2;
- (id)maskImage;
- (double)radius;

@end

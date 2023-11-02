
@interface CAMPortraitApertureCommand : CAMCaptureCommand {
    double  _aperture;
}

@property (nonatomic, readonly) double aperture;

- (double)aperture;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithAperture:(double)arg1;
- (id)initWithCoder:(id)arg1;

@end

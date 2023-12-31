
@interface CILumaMap : CIFilter {
    CIImage * _tableImage;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (void)dealloc;
- (id)inputImage;
- (const char *)lumaTable;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputImage:(id)arg1;

@end

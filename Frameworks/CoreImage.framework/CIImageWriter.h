
@interface CIImageWriter : CIFilter {
    NSString * inputFilename;
    CIImage * inputImage;
    CIFilter * inputOriginalFilter;
    NSNumber * inputShouldDumpInputValues;
}

@property (retain) NSString *inputFilename;
@property (retain) CIImage *inputImage;
@property (retain) CIFilter *inputOriginalFilter;
@property (retain) NSNumber *inputShouldDumpInputValues;

+ (id)customAttributes;

- (id)inputFilename;
- (id)inputImage;
- (id)inputOriginalFilter;
- (id)inputShouldDumpInputValues;
- (id)outputImage;
- (void)setInputFilename:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputOriginalFilter:(id)arg1;
- (void)setInputShouldDumpInputValues:(id)arg1;

@end

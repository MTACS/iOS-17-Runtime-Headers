
@interface CICircularityDescriptor : CIFilter {
    CIImage * inputCentroid;
    CIVector * inputExtent;
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *inputCentroid;
@property (nonatomic, retain) CIVector *inputExtent;

- (id)inputCentroid;
- (id)inputExtent;
- (id)outputImage;
- (void)setInputCentroid:(id)arg1;
- (void)setInputExtent:(id)arg1;

@end

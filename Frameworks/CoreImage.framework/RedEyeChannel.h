
@interface RedEyeChannel : CIFilter {
    NSNumber * inputChannel;
    CIImage * inputImage;
    NSNumber * inputParam1;
    NSNumber * inputParam2;
    NSNumber * inputParam3;
    NSNumber * inputParam4;
}

- (id)filterNameForChannel:(int)arg1;
- (id)outputImage;
- (id)parameterNamesForChannel:(int)arg1;

@end

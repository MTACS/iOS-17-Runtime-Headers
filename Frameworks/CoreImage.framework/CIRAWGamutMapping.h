
@interface CIRAWGamutMapping : CIFilter {
    CIImage * inputImage;
    NSDictionary * inputRAWDictionary;
}

- (id)outputImage;

@end

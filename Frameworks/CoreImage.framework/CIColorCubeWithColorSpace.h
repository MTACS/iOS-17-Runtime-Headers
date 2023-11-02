
@interface CIColorCubeWithColorSpace : CIColorCube {
    id  inputColorSpace;
}

@property (nonatomic, retain) id inputColorSpace;

+ (id)customAttributes;

- (id)inputColorSpace;
- (id)outputImage;
- (void)setInputColorSpace:(id)arg1;

@end

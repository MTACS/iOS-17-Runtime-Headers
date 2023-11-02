
@interface CheapRandomness : CIFilter {
    NSNumber * inputDither;
    NSNumber * inputScale;
}

@property (nonatomic, retain) NSNumber *inputDither;
@property (nonatomic, retain) NSNumber *inputScale;

- (id)inputDither;
- (id)inputScale;
- (id)outputImage;
- (void)setInputDither:(id)arg1;
- (void)setInputScale:(id)arg1;

@end

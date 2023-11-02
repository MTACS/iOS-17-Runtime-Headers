
@interface VNCIMultiplicationFilter : VNCIFilter {
    NSNumber * _inputFactor1;
    NSNumber * _inputFactor2;
    NSNumber * _inputFactor3;
    NSNumber * _inputFactor4;
}

@property (nonatomic, copy) NSNumber *inputFactor1;
@property (nonatomic, copy) NSNumber *inputFactor2;
@property (nonatomic, copy) NSNumber *inputFactor3;
@property (nonatomic, copy) NSNumber *inputFactor4;

- (void).cxx_destruct;
- (id)init;
- (id)inputFactor1;
- (id)inputFactor2;
- (id)inputFactor3;
- (id)inputFactor4;
- (id)outputImage;
- (void)setInputFactor1:(id)arg1;
- (void)setInputFactor2:(id)arg1;
- (void)setInputFactor3:(id)arg1;
- (void)setInputFactor4:(id)arg1;

@end

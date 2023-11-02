
@interface EspressoBrickTensorCPU : EspressoBrickTensor {
    float * _rawPointer;
}

@property float*rawPointer;

- (float*)rawPointer;
- (void)setRawPointer:(float*)arg1;

@end

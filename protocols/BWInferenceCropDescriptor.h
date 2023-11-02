
@protocol BWInferenceCropDescriptor <NSObject, NSCopying>

@required

- (bool)applicableToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forMediaKey:(NSString *)arg2;
- (BOOL)identifier;
- (struct { int x1; int x2; })maxCropForDimensions:(struct { int x1; int x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end

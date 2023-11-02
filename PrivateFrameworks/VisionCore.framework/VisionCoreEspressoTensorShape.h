
@interface VisionCoreEspressoTensorShape : VisionCoreTensorShape

@property (nonatomic, readonly) unsigned long long batchNumber;
@property (nonatomic, readonly) unsigned long long channels;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long width;

+ (id)shapeForBlobDimensions:(struct { char *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; })arg1;

- (unsigned long long)batchNumber;
- (unsigned long long)channels;
- (unsigned long long)height;
- (unsigned long long)width;

@end

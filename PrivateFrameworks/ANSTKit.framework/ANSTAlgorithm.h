
@interface ANSTAlgorithm : NSObject

@property (nonatomic, readonly) unsigned long long version;

+ (Class)_concreteClassOfVersion:(unsigned long long)arg1;
+ (unsigned long long)_version;
+ (id)new;

- (struct __CVBuffer { }*)createPixelBuffer:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (struct __CVPixelBufferPool { }*)pixelBufferPoolCreateWithMinCapacity:(unsigned long long)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 pixelFormat:(unsigned int)arg4;
- (bool)prepareWithError:(id*)arg1;
- (unsigned long long)version;

@end

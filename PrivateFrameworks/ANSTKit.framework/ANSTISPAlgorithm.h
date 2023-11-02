
@interface ANSTISPAlgorithm : ANSTAlgorithm {
    unsigned long long  _networkInputBufferHeight;
    unsigned int  _networkInputBufferPixelFormat;
    unsigned long long  _networkInputBufferWidth;
}

@property (nonatomic, readonly) unsigned long long networkInputBufferHeight;
@property (nonatomic, readonly) unsigned int networkInputBufferPixelFormat;
@property (nonatomic, readonly) unsigned long long networkInputBufferWidth;

+ (Class)_concreteClassOfVersion:(unsigned long long)arg1;
+ (id)new;

- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (unsigned long long)networkInputBufferHeight;
- (unsigned int)networkInputBufferPixelFormat;
- (unsigned long long)networkInputBufferWidth;
- (id)resultForPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)resultForPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(long long)arg2 error:(id*)arg3;

@end

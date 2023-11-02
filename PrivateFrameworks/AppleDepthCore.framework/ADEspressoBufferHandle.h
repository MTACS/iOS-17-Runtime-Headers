
@interface ADEspressoBufferHandle : NSObject {
    unsigned long long  _channels;
    NSArray * _dimensions;
    unsigned long long  _height;
    NSString * _name;
    void * _rawData;
    unsigned long long  _size;
    unsigned long long  _width;
}

@property (nonatomic, readonly) unsigned long long channels;
@property (nonatomic, readonly) void*data;
@property (nonatomic, readonly) NSArray *dimensions;
@property (nonatomic, readonly) unsigned long long dimensionsProduct;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly) unsigned long long width;

- (void).cxx_destruct;
- (unsigned long long)channels;
- (void)clearBuffer;
- (bool)copyTo:(id)arg1;
- (void*)data;
- (id)dimensions;
- (unsigned long long)dimensionsProduct;
- (unsigned long long)height;
- (id)initWithName:(id)arg1 buffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg2;
- (id)initWithName:(id)arg1 rawData:(void*)arg2 dimensions:(id)arg3 strides:(id)arg4;
- (unsigned long long)width;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;

@end


@interface PTDisparityPostProcessingDescriptor : NSObject {
    unsigned long long  _colorPixelFormat;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _colorSize;
    <MTLCommandQueue> * _commandQueue;
    unsigned long long  _disparityPixelFormat;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _disparitySize;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _filteredDisparitySize;
    NSString * _sensorPort;
}

@property (readonly) unsigned long long colorPixelFormat;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } colorSize;
@property (readonly, retain) <MTLCommandQueue> *commandQueue;
@property (readonly) unsigned long long disparityPixelFormat;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } disparitySize;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } filteredDisparitySize;
@property (readonly) NSString *sensorPort;

- (void).cxx_destruct;
- (unsigned long long)colorPixelFormat;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })colorSize;
- (id)commandQueue;
- (unsigned long long)disparityPixelFormat;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })disparitySize;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })filteredDisparitySize;
- (id)initWithCommandQueue:(id)arg1 disparitySize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg2 filteredDisparitySize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 disparityPixelFormat:(unsigned long long)arg4 colorSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg5 colorPixelFormat:(unsigned long long)arg6 sensorPort:(id)arg7;
- (id)sensorPort;

@end

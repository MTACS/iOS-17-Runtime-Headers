
@interface MIOPixelBufferPool : NSObject {
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    NSDictionary * _poolAttributes;
}

@property (nonatomic) struct __CVPixelBufferPool { }*pixelBufferPool;
@property (nonatomic, retain) NSDictionary *poolAttributes;

+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3;
+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 exactBytesPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5;
+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 exactBytesPerRows:(id)arg4 minBufferCount:(unsigned long long)arg5;
+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 extendedPixelsPerRow:(unsigned long long)arg4 minBufferCount:(unsigned long long)arg5;
+ (id)createMIOPixelBufferPoolWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 minBufferCount:(unsigned long long)arg4;
+ (id)createNewL008MIOPixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { }*)arg1 minBufferCount:(unsigned long long)arg2;
+ (id)createNewL010MIOPixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer { }*)arg1 minBufferCount:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)getAllocationThreshold;
- (double)getMaximumBufferAge;
- (unsigned long long)getMinimumBufferCount;
- (struct __CVBuffer { }*)getPixelBuffer;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 bufferAttributes:(struct __CFDictionary { }*)arg2 poolAttributes:(struct __CFDictionary { }*)arg3 error:(id*)arg4;
- (struct __CVPixelBufferPool { }*)pixelBufferPool;
- (id)poolAttributes;
- (void)setPixelBufferPool:(struct __CVPixelBufferPool { }*)arg1;
- (void)setPoolAttributes:(id)arg1;

@end

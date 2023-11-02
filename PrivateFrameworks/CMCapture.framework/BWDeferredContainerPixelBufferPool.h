
@interface BWDeferredContainerPixelBufferPool : BWPixelBufferPool {
    BWVideoFormat * _videoFormat;
}

@property (nonatomic, readonly) struct __CVPixelBufferPool { }*cvPixelBufferPool;
@property (nonatomic, readonly) struct __CFDictionary { }*cvPixelBufferPoolAuxAttributes;
@property (nonatomic, readonly) BWVideoFormat *videoFormat;

+ (void)initialize;

- (struct __CVPixelBufferPool { }*)cvPixelBufferPool;
- (struct __CFDictionary { }*)cvPixelBufferPoolAuxAttributes;
- (void)dealloc;
- (void)enumerateSurfacesUsingBlock:(id /* block */)arg1;
- (void)flush;
- (void)flushToMinimumCapacity:(unsigned long long)arg1;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (id)initWithAttributes:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(bool)arg4 memoryPool:(id)arg5 providesBackPressure:(bool)arg6;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 additionalPixelBufferAttributes:(id)arg5;
- (struct __CVBuffer { }*)newPixelBuffer;
- (int)preallocate;
- (void)preallocateWithCompletionHandler:(id /* block */)arg1;
- (void)prefetchWithCompletionHandler:(id /* block */)arg1;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool { }*)arg1 attributes:(struct __CFDictionary { }*)arg2;
- (void)setCapacity:(unsigned long long)arg1;
- (id)videoFormat;

@end

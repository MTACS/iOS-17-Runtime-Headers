
@interface BWPixelBufferPool : NSObject {
    NSDictionary * _additionalPixelBufferAttributes;
    NSObject<OS_dispatch_semaphore> * _backPressureSemaphore;
    unsigned long long  _capacity;
    bool  _clientProvidesPool;
    BWMemoryPool * _memoryPool;
    NSString * _name;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    NSDictionary * _pixelBufferPoolAuxAttributes;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pixelBufferPoolConfigurationLock;
    int  _pixelBufferPoolCreateError;
    NSMutableSet * _prefetchedSurfaceIDs;
    bool  _providesBackPressure;
    BWVideoFormat * _videoFormat;
}

@property (nonatomic, readonly) unsigned long long capacity;
@property (nonatomic, readonly) struct __CVPixelBufferPool { }*cvPixelBufferPool;
@property (nonatomic, readonly) struct __CFDictionary { }*cvPixelBufferPoolAuxAttributes;
@property (nonatomic, readonly) unsigned long long height;
@property (readonly) NSString *name;
@property (getter=isPixelBufferAvailable, nonatomic, readonly) bool pixelBufferAvailable;
@property (nonatomic, readonly) unsigned int pixelFormat;
@property (nonatomic, readonly) unsigned long long sliceCount;
@property (nonatomic, readonly) bool usesMemoryPool;
@property (nonatomic, readonly) unsigned long long width;

+ (void)initialize;

- (unsigned long long)capacity;
- (struct __CVPixelBufferPool { }*)cvPixelBufferPool;
- (struct __CFDictionary { }*)cvPixelBufferPoolAuxAttributes;
- (void)dealloc;
- (id)description;
- (void)enumerateSurfacesUsingBlock:(id /* block */)arg1;
- (void)flushToMinimumCapacity:(unsigned long long)arg1;
- (unsigned long long)height;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 clientProvidesPool:(bool)arg4 memoryPool:(id)arg5 providesBackPressure:(bool)arg6;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4;
- (id)initWithVideoFormat:(id)arg1 capacity:(unsigned long long)arg2 name:(id)arg3 memoryPool:(id)arg4 additionalPixelBufferAttributes:(id)arg5 providesBackPressure:(bool)arg6;
- (bool)isPixelBufferAvailable;
- (id)name;
- (struct __CVBuffer { }*)newPixelBuffer;
- (unsigned int)pixelFormat;
- (int)preallocate;
- (void)preallocateWithCompletionHandler:(id /* block */)arg1;
- (bool)prefetch:(int)arg1 lastEmittedSurfaceID:(unsigned int)arg2;
- (void)prefetchWithCompletionHandler:(id /* block */)arg1;
- (void)setCVPixelBufferPool:(struct __CVPixelBufferPool { }*)arg1 attributes:(struct __CFDictionary { }*)arg2;
- (void)setCapacity:(unsigned long long)arg1;
- (unsigned long long)sliceCount;
- (bool)usesMemoryPool;
- (bool)waitForAvailablePixelBuffer;
- (unsigned long long)width;

@end

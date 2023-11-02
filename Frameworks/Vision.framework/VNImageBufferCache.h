
@interface VNImageBufferCache : NSObject {
    struct __CFDictionary { } * _pixelBufferReps;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pixelBufferRepsLock;
}

+ (id)cacheKeyWithBufferFormat:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
+ (id)cacheKeyWithBufferFormat:(unsigned int)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;

- (void)cacheBuffer:(struct __CVBuffer { }*)arg1 forCacheKey:(id)arg2;
- (struct __CVBuffer { }*)cachedBufferWithKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)purgeCacheRepresentationsForOriginalBuffer:(struct __CVBuffer { }*)arg1;
- (void)removeCachedBufferWithKey:(id)arg1;

@end

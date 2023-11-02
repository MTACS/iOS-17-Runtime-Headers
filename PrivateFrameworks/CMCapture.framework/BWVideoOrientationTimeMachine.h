
@interface BWVideoOrientationTimeMachine : NSObject {
    NSMutableArray * _cache;
    unsigned long long  _capacity;
    struct opaqueCMFormatDescription { } * _formatDescription;
    unsigned int  _metadataLocalID;
    struct OpaqueFigSimpleMutex { } * _propertyMutex;
}

+ (void)initialize;

- (id)_cachedItemsFromPTSSeconds:(double)arg1 toPTSSeconds:(double)arg2;
- (void)addItemToCacheWithPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 exifOrientation:(short)arg2;
- (id)copyVideoOrientationSbufFromPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 referencePTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithCapacity:(unsigned long long)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 metadataLocalID:(unsigned int)arg3;

@end

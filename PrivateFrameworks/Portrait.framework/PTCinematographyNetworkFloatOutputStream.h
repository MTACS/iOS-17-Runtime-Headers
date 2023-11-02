
@interface PTCinematographyNetworkFloatOutputStream : NSObject {
    unsigned long long  _count;
    float * _fp;
    unsigned long long  _index;
}

@property (readonly) unsigned long long count;
@property (readonly) float*fp;
@property unsigned long long index;

- (unsigned long long)count;
- (float*)fp;
- (unsigned long long)index;
- (id)initWithDestination:(float*)arg1 count:(unsigned long long)arg2;
- (unsigned long long)remainingCount;
- (void)setIndex:(unsigned long long)arg1;
- (void)writeFloat:(float)arg1;
- (void)writeFloats:(float*)arg1 count:(unsigned long long)arg2;
- (void)writeOneHot:(unsigned long long)arg1 count:(unsigned long long)arg2;
- (void)writeZerosWithCount:(unsigned long long)arg1;

@end

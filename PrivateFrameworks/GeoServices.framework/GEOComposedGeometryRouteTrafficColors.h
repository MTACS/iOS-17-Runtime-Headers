
@interface GEOComposedGeometryRouteTrafficColors : NSObject {
    unsigned long long  _count;
    unsigned int * _trafficColorOffsets;
    unsigned int * _trafficColors;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) unsigned int*trafficColorOffsets;
@property (nonatomic, readonly) unsigned int*trafficColors;

- (unsigned long long)count;
- (void)dealloc;
- (id)initWithColors:(unsigned int*)arg1 offsets:(unsigned int*)arg2 count:(unsigned long long)arg3;
- (unsigned int*)trafficColorOffsets;
- (unsigned int*)trafficColors;

@end

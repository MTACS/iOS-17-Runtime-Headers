
@interface PRProximityDeviceParameters : NSObject {
    void * _filter;
    NSNumber * _rssiImmediate;
    NSNumber * _rssiNear;
    unsigned long long  _samplesize;
}

@property (readonly) void*filter;
@property (readonly) NSNumber *rssiImmediate;
@property (readonly) NSNumber *rssiNear;
@property (readonly) unsigned long long samplesize;

- (void).cxx_destruct;
- (void*)filter;
- (id)init;
- (id)initWithFilter:(void*)arg1 sampleSize:(unsigned long long)arg2 rssiImmediate:(id)arg3 rssiNear:(id)arg4;
- (id)rssiImmediate;
- (id)rssiNear;
- (unsigned long long)samplesize;

@end

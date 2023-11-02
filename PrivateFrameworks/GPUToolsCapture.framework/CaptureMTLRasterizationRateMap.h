
@interface CaptureMTLRasterizationRateMap : NSObject <CaptureMTLObject, MTLRasterizationRateMap> {
    <MTLRasterizationRateMapSPI> * _baseObject;
    CaptureMTLDevice * _captureDevice;
    struct GTTraceContext { } * _traceContext;
    struct GTTraceStream { } * _traceStream;
}

@property (readonly) <MTLRasterizationRateMap> *baseObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) unsigned long long layerCount;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; } parameterBufferSizeAndAlign;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } physicalGranularity;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } screenSize;
@property (readonly) unsigned long long streamReference;
@property (readonly) Class superclass;
@property (readonly) struct GTTraceContext { }*traceContext;
@property (readonly) struct GTTraceStream { }*traceStream;

- (void).cxx_destruct;
- (id)baseObject;
- (bool)conformsToProtocol:(id)arg1;
- (void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithBaseObject:(id)arg1 captureDevice:(id)arg2;
- (id)label;
- (unsigned long long)layerCount;
- (struct { float x1; float x2; })mapPhysicalToScreenCoordinates:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (struct { float x1; float x2; })mapScreenToPhysicalCoordinates:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (float)minFactor;
- (unsigned long long)mutability;
- (id)originalObject;
- (struct { unsigned long long x1; unsigned long long x2; })parameterBufferSizeAndAlign;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })physicalGranularity;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })physicalSizeForLayer:(unsigned long long)arg1;
- (void)resetUsingDescriptor:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })screenSize;
- (unsigned long long)streamReference;
- (void)touch;
- (struct GTTraceContext { }*)traceContext;
- (struct GTTraceStream { }*)traceStream;

@end

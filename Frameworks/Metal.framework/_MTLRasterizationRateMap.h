
@interface _MTLRasterizationRateMap : NSObject <MTLRasterizationRateMapSPI> {
    <MTLDevice> * _device;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _dim;
    NSString * _label;
    float  _minFactor;
    unsigned long long  _mutability;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) unsigned long long layerCount;
@property (nonatomic, readonly) float minFactor;
@property (nonatomic, readonly) unsigned long long mutability;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; } parameterBufferSizeAndAlign;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } physicalGranularity;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } screenSize;
@property (readonly) Class superclass;

- (void)copyParameterDataToBuffer:(id)arg1 atOffset:(unsigned long long)arg2;
- (void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)init;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2;
- (id)label;
- (unsigned long long)layerCount;
- (struct { float x1; float x2; })mapPhysicalToScreenCoordinates:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (struct { float x1; float x2; })mapScreenToPhysicalCoordinates:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (float)minFactor;
- (unsigned long long)mutability;
- (struct { unsigned long long x1; unsigned long long x2; })parameterBufferSizeAndAlign;
- (struct { float x1; float x2; })physicalCoordinate:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })physicalGranularity;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })physicalSizeForLayer:(unsigned long long)arg1;
- (void)resetUsingDescriptor:(id)arg1;
- (struct { float x1; float x2; })screenCoordinate:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })screenSize;

@end

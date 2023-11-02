
@interface MTLRasterizationRateMapDescriptor : NSObject <NSCopying>

@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) unsigned long long layerCount;
@property (nonatomic, readonly) MTLRasterizationRateLayerArray *layers;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } screenSize;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)rasterizationRateMapDescriptorWithScreenSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
+ (id)rasterizationRateMapDescriptorWithScreenSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 layer:(id)arg2;
+ (id)rasterizationRateMapDescriptorWithScreenSize:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1 layerCount:(unsigned long long)arg2 layers:(const id*)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (void)setLayer:(id)arg1 atIndex:(unsigned long long)arg2;

@end

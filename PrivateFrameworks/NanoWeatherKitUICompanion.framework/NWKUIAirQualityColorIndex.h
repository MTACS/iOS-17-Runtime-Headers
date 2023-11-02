
@interface NWKUIAirQualityColorIndex : NWKUIColorIndex <NWKUIColorIndexable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allIndices;
+ (id)colorForIndex:(unsigned long long)arg1;
+ (id)colorIndexWithIndex:(double)arg1 color:(id)arg2;
+ (unsigned long long)lastIndex;

- (id)initWithIndex:(double)arg1 color:(id)arg2;

@end


@interface NWMUltravioletIndexColorIndex : NWKUIColorIndex <NWKUIColorIndexable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allIndices;
+ (id)indexWithUltravioletIndexValue:(double)arg1 color:(id)arg2;
+ (double)lastValue;

- (id)initWithUltravioletIndexValue:(double)arg1 color:(id)arg2;

@end

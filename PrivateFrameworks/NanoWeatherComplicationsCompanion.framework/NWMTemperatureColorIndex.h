
@interface NWMTemperatureColorIndex : NWKUIColorIndex <NWKUIColorIndexable> {
    WFTemperature * _temperature;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFTemperature *temperature;

+ (id)allIndices;
+ (id)indexWithTemperature:(id)arg1 color:(id)arg2;

- (void).cxx_destruct;
- (id)initWithTemperature:(id)arg1 color:(id)arg2;
- (id)temperature;

@end

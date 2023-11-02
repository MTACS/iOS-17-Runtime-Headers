
@interface FIUIDepthFormatter : NSObject {
    void depthFormatter;
    void unitManager;
}

- (void).cxx_destruct;
- (id)formatDepthValue:(double)arg1 unit:(unsigned long long)arg2;
- (id)formatMaxDepth:(double)arg1 unit:(unsigned long long)arg2;
- (id)formatUnderwaterTime:(double)arg1;
- (id)formatWaterTemperatureRangeWithLower:(double)arg1 upper:(double)arg2;
- (id)formatWaterTemperatureValue:(double)arg1;
- (id)init;
- (id)initWithUnitManager:(id)arg1;

@end

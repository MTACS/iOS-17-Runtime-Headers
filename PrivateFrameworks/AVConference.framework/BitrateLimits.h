
@interface BitrateLimits : NSObject {
    unsigned long long  defaultValue;
    unsigned long long  defaultValue2G;
    unsigned long long  defaultValueCellular;
    NSArray * limits;
}

@property (nonatomic, readonly) NSArray *limits;

+ (unsigned long long)insertionIndex:(id)arg1 forValue:(id)arg2;

- (void)capDefaultValues:(unsigned long long)arg1;
- (void)dealloc;
- (unsigned long long)defaultValueForNetwork:(bool)arg1;
- (id)initWithOperatingMode:(unsigned char)arg1 withBitrateCap:(unsigned long long)arg2 useCaseWatchContinuity:(bool)arg3;
- (id)limits;
- (void)setupDefaultValuesAudio;

@end

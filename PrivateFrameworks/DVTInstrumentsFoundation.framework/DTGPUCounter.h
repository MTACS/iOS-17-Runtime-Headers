
@interface DTGPUCounter : NSObject {
    NSString * _counterDescription;
    NSString * _functionName;
    unsigned int  _groupIndex;
    unsigned long long  _maxValue;
    unsigned int  _multiplier;
    NSString * _name;
    NSArray * _rawCounters;
    bool  _requiresWeightAccumulation;
    NSString * _type;
}

@property (nonatomic, retain) NSString *counterDescription;
@property (nonatomic, retain) NSString *functionName;
@property (nonatomic) unsigned int groupIndex;
@property (nonatomic) unsigned long long maxValue;
@property (nonatomic) unsigned int multiplier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSArray *rawCounters;
@property (nonatomic, readonly) bool requiresWeightAccumulation;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (id)counterDescription;
- (id)functionName;
- (unsigned int)groupIndex;
- (id)infoArray;
- (id)initWithName:(id)arg1 maxValue:(unsigned long long)arg2;
- (unsigned long long)maxValue;
- (unsigned int)multiplier;
- (id)name;
- (id)rawCounters;
- (bool)requiresWeightAccumulation;
- (void)setCounterDescription:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setGroupIndex:(unsigned int)arg1;
- (void)setMaxValue:(unsigned long long)arg1;
- (void)setMultiplier:(unsigned int)arg1;
- (void)setRawCounters:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;

@end

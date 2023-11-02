
@interface DTGPURawCounter_GPURawCounter : DTGPURawCounter {
    unsigned long long  _counterIdx;
    GPURawCounterSelect * _rawCounterSelect;
    unsigned long long  _sourceIdx;
    unsigned long long  _valueType;
    unsigned int  _width;
}

@property (nonatomic) unsigned long long counterIdx;
@property (nonatomic, retain) GPURawCounterSelect *rawCounterSelect;
@property (nonatomic) unsigned long long sourceIdx;
@property (nonatomic) unsigned long long valueType;
@property (nonatomic) unsigned int width;

- (void).cxx_destruct;
- (unsigned long long)counterIdx;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 width:(unsigned int)arg2;
- (id)rawCounterSelect;
- (void)setCounterIdx:(unsigned long long)arg1;
- (void)setRawCounterSelect:(id)arg1;
- (void)setSourceIdx:(unsigned long long)arg1;
- (void)setValueType:(unsigned long long)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned long long)sourceIdx;
- (unsigned long long)valueType;
- (unsigned int)width;

@end

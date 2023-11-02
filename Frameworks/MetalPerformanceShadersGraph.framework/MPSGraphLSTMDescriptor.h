
@interface MPSGraphLSTMDescriptor : MPSGraphObject <NSCopying> {
    unsigned long long  _activation;
    bool  _bidirectional;
    unsigned long long  _cellGateActivation;
    unsigned long long  _forgetGateActivation;
    bool  _forgetGateLast;
    bool  _hasCellGradient;
    bool  _hasInitCell;
    bool  _hasInitState;
    bool  _hasMask;
    bool  _hasPeephole;
    unsigned long long  _inputGateActivation;
    unsigned long long  _outputGateActivation;
    bool  _produceCell;
    bool  _reverse;
    bool  _training;
}

@property (nonatomic) unsigned long long activation;
@property (nonatomic) bool bidirectional;
@property (nonatomic) unsigned long long cellGateActivation;
@property (nonatomic) unsigned long long forgetGateActivation;
@property (nonatomic) bool forgetGateLast;
@property (nonatomic) unsigned long long inputGateActivation;
@property (nonatomic) unsigned long long outputGateActivation;
@property (nonatomic) bool produceCell;
@property (nonatomic) bool reverse;
@property (nonatomic) bool training;

+ (id)descriptor;

- (unsigned long long)activation;
- (bool)bidirectional;
- (unsigned long long)cellGateActivation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)forgetGateActivation;
- (bool)forgetGateLast;
- (unsigned long long)inputGateActivation;
- (unsigned long long)outputGateActivation;
- (bool)produceCell;
- (bool)reverse;
- (void)setActivation:(unsigned long long)arg1;
- (void)setBidirectional:(bool)arg1;
- (void)setCellGateActivation:(unsigned long long)arg1;
- (void)setForgetGateActivation:(unsigned long long)arg1;
- (void)setForgetGateLast:(bool)arg1;
- (void)setInputGateActivation:(unsigned long long)arg1;
- (void)setOutputGateActivation:(unsigned long long)arg1;
- (void)setProduceCell:(bool)arg1;
- (void)setReverse:(bool)arg1;
- (void)setTraining:(bool)arg1;
- (bool)training;

@end

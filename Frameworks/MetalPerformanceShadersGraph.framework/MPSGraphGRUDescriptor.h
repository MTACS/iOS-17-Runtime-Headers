
@interface MPSGraphGRUDescriptor : MPSGraphObject <NSCopying> {
    bool  _bidirectional;
    bool  _flipZ;
    bool  _hasBias2;
    bool  _hasInitState;
    bool  _hasMask;
    unsigned long long  _outputGateActivation;
    bool  _resetAfter;
    unsigned long long  _resetGateActivation;
    bool  _resetGateFirst;
    bool  _reverse;
    bool  _training;
    unsigned long long  _updateGateActivation;
}

@property (nonatomic) bool bidirectional;
@property (nonatomic) bool flipZ;
@property (nonatomic) unsigned long long outputGateActivation;
@property (nonatomic) bool resetAfter;
@property (nonatomic) unsigned long long resetGateActivation;
@property (nonatomic) bool resetGateFirst;
@property (nonatomic) bool reverse;
@property (nonatomic) bool training;
@property (nonatomic) unsigned long long updateGateActivation;

+ (id)descriptor;

- (bool)bidirectional;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)flipZ;
- (unsigned long long)outputGateActivation;
- (bool)resetAfter;
- (unsigned long long)resetGateActivation;
- (bool)resetGateFirst;
- (bool)reverse;
- (void)setBidirectional:(bool)arg1;
- (void)setFlipZ:(bool)arg1;
- (void)setOutputGateActivation:(unsigned long long)arg1;
- (void)setResetAfter:(bool)arg1;
- (void)setResetGateActivation:(unsigned long long)arg1;
- (void)setResetGateFirst:(bool)arg1;
- (void)setReverse:(bool)arg1;
- (void)setTraining:(bool)arg1;
- (void)setUpdateGateActivation:(unsigned long long)arg1;
- (bool)training;
- (unsigned long long)updateGateActivation;

@end

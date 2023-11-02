
@interface MPSGraphSingleGateRNNDescriptor : MPSGraphObject <NSCopying> {
    unsigned long long  _activation;
    bool  _bidirectional;
    bool  _hasInitState;
    bool  _hasMask;
    bool  _reverse;
    bool  _training;
}

@property (nonatomic) unsigned long long activation;
@property (nonatomic) bool bidirectional;
@property (nonatomic) bool reverse;
@property (nonatomic) bool training;

+ (id)descriptor;

- (unsigned long long)activation;
- (bool)bidirectional;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)reverse;
- (void)setActivation:(unsigned long long)arg1;
- (void)setBidirectional:(bool)arg1;
- (void)setReverse:(bool)arg1;
- (void)setTraining:(bool)arg1;
- (bool)training;

@end

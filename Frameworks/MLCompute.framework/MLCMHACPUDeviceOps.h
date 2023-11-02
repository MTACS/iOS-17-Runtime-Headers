
@interface MLCMHACPUDeviceOps : MLCCPUDeviceOps {
    NSArray * _attnBiasDeltaData;
    NSData * _attnMask;
    NSData * _backpropCacheData;
    unsigned long long  _backpropCacheSize;
    NSMutableArray * _biasMomentumDeltaDataArray;
    bool  _hasAttnBias;
    bool  _hasAttnMask;
    bool  _hasKeyMask;
    NSData * _keyMask;
    unsigned long long  _keyMaskStride;
    NSMutableArray * _weightsMomentumDeltaDataArray;
}

@property (nonatomic, retain) NSArray *attnBiasDeltaData;
@property (nonatomic, retain) NSData *attnMask;
@property (nonatomic, retain) NSData *backpropCacheData;
@property (nonatomic) unsigned long long backpropCacheSize;
@property (nonatomic, retain) NSMutableArray *biasMomentumDeltaDataArray;
@property (nonatomic) bool hasAttnBias;
@property (nonatomic) bool hasAttnMask;
@property (nonatomic) bool hasKeyMask;
@property (nonatomic, retain) NSData *keyMask;
@property (nonatomic) unsigned long long keyMaskStride;
@property (nonatomic, retain) NSMutableArray *weightsMomentumDeltaDataArray;

+ (id)deviceOpsWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8;

- (void).cxx_destruct;
- (id)attnBiasDeltaData;
- (id)attnMask;
- (id)backpropCacheData;
- (unsigned long long)backpropCacheSize;
- (id)biasMomentumDeltaDataArray;
- (bool)hasAttnBias;
- (bool)hasAttnMask;
- (bool)hasKeyMask;
- (id)initWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 betaDeltaData:(id)arg9 gammaDeltaData:(id)arg10 betaMomentumData:(id)arg11 gammaMomentumData:(id)arg12;
- (id)keyMask;
- (unsigned long long)keyMaskStride;
- (void)setAttnBiasDeltaData:(id)arg1;
- (void)setAttnMask:(id)arg1;
- (void)setBackpropCacheData:(id)arg1;
- (void)setBackpropCacheSize:(unsigned long long)arg1;
- (void)setBiasMomentumDeltaDataArray:(id)arg1;
- (void)setHasAttnBias:(bool)arg1;
- (void)setHasAttnMask:(bool)arg1;
- (void)setHasKeyMask:(bool)arg1;
- (void)setKeyMask:(id)arg1;
- (void)setKeyMaskStride:(unsigned long long)arg1;
- (void)setWeightsMomentumDeltaDataArray:(id)arg1;
- (id)weightsMomentumDeltaDataArray;

@end

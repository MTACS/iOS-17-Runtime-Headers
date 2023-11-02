
@interface MLCSliceCPUDeviceOps : MLCCPUDeviceOps {
    NSArray * _begin;
    unsigned long long  _beginOffset;
    NSArray * _count;
    NSArray * _stride;
}

@property (nonatomic, copy) NSArray *begin;
@property (nonatomic) unsigned long long beginOffset;
@property (nonatomic, copy) NSArray *count;
@property (nonatomic, copy) NSArray *stride;

+ (id)deviceOpsWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8;

- (void).cxx_destruct;
- (id)begin;
- (unsigned long long)beginOffset;
- (id)count;
- (id)initWithType:(int)arg1 params:(id)arg2 inDeltaData:(id)arg3 outDeltaData:(id)arg4 weightsDeltaData:(id)arg5 biasDeltaData:(id)arg6 weightsMomentumData:(id)arg7 biasMomentumData:(id)arg8 betaDeltaData:(id)arg9 gammaDeltaData:(id)arg10 betaMomentumData:(id)arg11 gammaMomentumData:(id)arg12;
- (void)setBegin:(id)arg1;
- (void)setBeginOffset:(unsigned long long)arg1;
- (void)setCount:(id)arg1;
- (void)setStride:(id)arg1;
- (id)stride;

@end

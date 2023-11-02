
@interface DTGPUAGXCounterSourceGroup : NSObject {
    NSArray * _selects;
    <GPURawCounterSourceGroup> * _sourceGroup;
    NSArray * _sources;
}

@property (nonatomic, readonly) NSArray *sources;

- (void).cxx_destruct;
- (id)initWithSourceGroup:(id)arg1 selects:(id)arg2 apsSelects:(id)arg3 profile:(unsigned long long)arg4;
- (bool)request:(unsigned long long)arg1 vendorFeatures:(id)arg2;
- (void)resume;
- (void)sampleAPS:(id /* block */)arg1;
- (void)sampleCounters:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (id)sources;
- (void)stop;

@end

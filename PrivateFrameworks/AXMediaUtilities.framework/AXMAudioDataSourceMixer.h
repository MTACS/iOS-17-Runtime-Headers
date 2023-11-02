
@interface AXMAudioDataSourceMixer : AXMAudioDataSource {
    NSSet * _dataSources;
    NSString * _name;
    double  _panning;
}

@property (nonatomic, retain) NSSet *dataSources;
@property (nonatomic, readonly) bool isMonoOutput;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double panning;

- (void).cxx_destruct;
- (void)addDataSource:(id)arg1;
- (id)dataSources;
- (id)description;
- (id)initWithName:(id)arg1 sampleRate:(double)arg2 circular:(bool)arg3;
- (bool)isMonoOutput;
- (id)name;
- (double)panning;
- (void)prepareNextSamples:(unsigned long long)arg1;
- (void)removeAllDataSources;
- (void)removeDataSource:(id)arg1;
- (void)setCurrentSampleIndex:(unsigned long long)arg1;
- (void)setDataSources:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPanning:(double)arg1;

@end

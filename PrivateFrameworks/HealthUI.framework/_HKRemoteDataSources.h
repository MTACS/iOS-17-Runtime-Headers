
@interface _HKRemoteDataSources : NSObject {
    NSMutableDictionary * _dataSources;
    bool  _supportsChartQueryDataGeneration;
}

@property (nonatomic) bool supportsChartQueryDataGeneration;

- (void).cxx_destruct;
- (id)allDataSources;
- (id)dataSourceForTimeScope:(long long)arg1;
- (id)init;
- (id)initSupportsChartQueryDataGeneration:(bool)arg1;
- (void)setDataSource:(id)arg1 forTimeScope:(long long)arg2;
- (void)setSupportsChartQueryDataGeneration:(bool)arg1;
- (bool)supportsChartQueryDataGeneration;

@end

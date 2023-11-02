
@interface EspressoProfilingNetworkInfo : NSObject {
    EspressoProfilingANEcompilerAnalytics * _ane_compiler_analytics;
    EspressoProfilingNetworkANEInfo * _ane_performance_info;
    NSMutableArray * _layers;
    NSString * _network_at_path;
}

@property (retain) EspressoProfilingANEcompilerAnalytics *ane_compiler_analytics;
@property (retain) EspressoProfilingNetworkANEInfo *ane_performance_info;
@property (retain) NSMutableArray *layers;
@property (retain) NSString *network_at_path;

- (void).cxx_destruct;
- (id)ane_compiler_analytics;
- (id)ane_performance_info;
- (id)layers;
- (id)network_at_path;
- (void)setAne_compiler_analytics:(id)arg1;
- (void)setAne_performance_info:(id)arg1;
- (void)setLayers:(id)arg1;
- (void)setNetwork_at_path:(id)arg1;

@end

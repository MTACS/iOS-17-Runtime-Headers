
@interface EspressoProfilingLayerInfo : NSObject {
    double  _average_runtime;
    NSString * _debug_name;
    EspressoProfilingLayerSupportInfo * _main_engine_support;
    NSString * _name;
    NSDictionary * _per_platform_support;
    NSArray * _runtimes;
    int  _selected_runtime_engine;
}

@property double average_runtime;
@property (retain) NSString *debug_name;
@property (retain) EspressoProfilingLayerSupportInfo *main_engine_support;
@property (retain) NSString *name;
@property (retain) NSDictionary *per_platform_support;
@property (retain) NSArray *runtimes;
@property int selected_runtime_engine;

- (void).cxx_destruct;
- (double)average_runtime;
- (id)debug_name;
- (id)main_engine_support;
- (id)name;
- (id)per_platform_support;
- (id)runtimes;
- (int)selected_runtime_engine;
- (void)setAverage_runtime:(double)arg1;
- (void)setDebug_name:(id)arg1;
- (void)setMain_engine_support:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPer_platform_support:(id)arg1;
- (void)setRuntimes:(id)arg1;
- (void)setSelected_runtime_engine:(int)arg1;

@end

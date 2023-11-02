
@interface EspressoProfilingLayerSupportInfo : NSObject {
    NSArray * _error_private;
    NSArray * _error_public;
    bool  _exists;
    bool  _has_perf_warning;
    bool  _internal_layer;
    bool  _supported;
    NSString * _type;
}

@property (retain) NSArray *error_private;
@property (retain) NSArray *error_public;
@property bool exists;
@property bool has_perf_warning;
@property bool internal_layer;
@property bool supported;
@property (retain) NSString *type;

- (void).cxx_destruct;
- (id)error_private;
- (id)error_public;
- (bool)exists;
- (bool)has_perf_warning;
- (bool)internal_layer;
- (void)setError_private:(id)arg1;
- (void)setError_public:(id)arg1;
- (void)setExists:(bool)arg1;
- (void)setHas_perf_warning:(bool)arg1;
- (void)setInternal_layer:(bool)arg1;
- (void)setSupported:(bool)arg1;
- (void)setType:(id)arg1;
- (bool)supported;
- (id)type;

@end

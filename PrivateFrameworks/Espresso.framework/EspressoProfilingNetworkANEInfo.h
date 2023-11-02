
@interface EspressoProfilingNetworkANEInfo : NSObject {
    unsigned long long  _ane_time_per_eval_ns;
    unsigned long long  _total_ane_time_ns;
}

@property unsigned long long ane_time_per_eval_ns;
@property unsigned long long total_ane_time_ns;

- (unsigned long long)ane_time_per_eval_ns;
- (void)setAne_time_per_eval_ns:(unsigned long long)arg1;
- (void)setTotal_ane_time_ns:(unsigned long long)arg1;
- (unsigned long long)total_ane_time_ns;

@end

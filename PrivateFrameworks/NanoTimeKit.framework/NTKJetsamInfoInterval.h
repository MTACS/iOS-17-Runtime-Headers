
@interface NTKJetsamInfoInterval : NSObject {
    NTKJetsamInfoFetcher * _fetcher;
    NSString * _label;
    struct jetsam_info { 
        long long currentKB; 
        long long maxLifetimeKB; 
        long long maxIntervalKB; 
    }  _startInfo;
}

@property (nonatomic, readonly) struct jetsam_info { long long x1; long long x2; long long x3; } currentInfo;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) struct jetsam_info { long long x1; long long x2; long long x3; } startInfo;

- (void).cxx_destruct;
- (struct jetsam_info { long long x1; long long x2; long long x3; })currentInfo;
- (id)initWithLabel:(id)arg1;
- (id)label;
- (void)logCurrentInterval;
- (void)reset;
- (struct jetsam_info { long long x1; long long x2; long long x3; })startInfo;
- (bool)waitUntilDirtyMemoryDrained;
- (bool)waitUntilDirtyMemoryReaches:(long long)arg1 maxWaitMS:(int)arg2;

@end

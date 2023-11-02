
@interface HSIOReportSnapshot : HSIOReport {
    NSArray * _samples;
}

@property (nonatomic, retain) NSArray *samples;

+ (id)report:(id*)arg1;
+ (id)reportWithOnlySimpleChannels:(id*)arg1;
+ (id)snapshotReport:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSnapshot:(id)arg1;
- (id)reportWithOnlySimpleChannels;
- (id)samples;
- (void)setSamples:(id)arg1;
- (id)snapshotByFilteringSamples:(id /* block */)arg1;
- (id)snapshotWithBaseline:(id)arg1 error:(id*)arg2;

@end


@interface PHAHighlightEnrichmentTask : PHAEnrichmentTask {
    bool  _didProduceContent;
    unsigned long long  _tailorOptions;
}

@property (nonatomic) unsigned long long tailorOptions;

- (bool)currentPlatformIsSupported;
- (bool)didProduceContent;
- (id)incrementalKey;
- (double)period;
- (int)priority;
- (bool)runWithGraphManager:(id)arg1 progressReporter:(id)arg2 error:(id*)arg3;
- (void)setTailorOptions:(unsigned long long)arg1;
- (unsigned long long)tailorOptions;
- (void)timeoutFatal:(bool)arg1;

@end

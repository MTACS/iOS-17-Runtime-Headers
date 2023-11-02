
@interface PHAHighlightCollectionEnrichmentTask : PHAEnrichmentTask {
    NSDictionary * _options;
}

- (void).cxx_destruct;
- (bool)currentPlatformIsSupported;
- (id)enrichmentProcessor;
- (id)incrementalKey;
- (id)initWithOptions:(id)arg1;
- (double)period;
- (int)priority;
- (id)taskClassDependencies;
- (void)timeoutFatal:(bool)arg1;

@end

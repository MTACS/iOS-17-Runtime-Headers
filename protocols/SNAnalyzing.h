
@protocol SNAnalyzing <SNProcessing>

@required

- (void*)resultsBox;
- (NSArray *)resultsFromBox:(void*)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;

@optional

- (void)primeGraph;

@end


@interface SNSoundDetector : SNDetectorHead <SNAnalyzing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct shared_ptr<DSPGraph::Graph> { } graph;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct Box { }*resultsBox;
@property (readonly) Class superclass;

@end

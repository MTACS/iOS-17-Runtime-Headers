
@interface PGPublicEventFeatureSummarySource : NSObject <PGFeatureSummarySourceProtocol> {
    PGGraph * _graph;
    NSObject<OS_os_log> * _loggingConnection;
    PGGraphMomentNodeCollection * _momentNodesWithRelevantPublicEvent;
    PGTitleGenerationContext * _titleGenerationContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1 titleGenerationContext:(id)arg2 graph:(id)arg3;
- (id)summarizedFeaturesForMomentNodes:(id)arg1;

@end

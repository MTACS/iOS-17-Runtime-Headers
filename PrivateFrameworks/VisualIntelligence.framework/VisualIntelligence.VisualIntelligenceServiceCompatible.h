
@interface VisualIntelligence.VisualIntelligenceServiceCompatible : NSObject {
    void cancellables;
    void service;
}

@property (nonatomic, readonly) _TtC18VisualIntelligence23OntologyGraphCompatible *ontologyGraph;

+ (unsigned long long)parseFlowCacheVersion;

- (void).cxx_destruct;
- (void)clearCacheWithCacheOption:(long long)arg1;
- (id)detectWithImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
- (id)init;
- (id)initWithTimeoutInterval:(long long)arg1;
- (id)ontologyGraph;
- (id)parseCachedWithVisualQuery:(id)arg1 cachedResults:(id)arg2 completion:(id /* block */)arg3;
- (id)parseWithVisualQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)pegasusPayloadDataWithImage:(id)arg1 visualUnderstanding:(id)arg2 queryContext:(id)arg3 error:(id*)arg4;
- (id)refineRegionsWithRequest:(id)arg1 error:(id*)arg2;
- (id)searchWithImage:(id)arg1 visualUnderstanding:(id)arg2 queryContext:(id)arg3 completion:(id /* block */)arg4;
- (id)searchWithVisualQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)submitUserFeedbackWithUserFeedback:(id)arg1 completion:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })targetImageSizeWithInputImageSize:(struct CGSize { double x1; double x2; })arg1;

@end

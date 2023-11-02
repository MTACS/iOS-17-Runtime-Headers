
@interface VIService : NSObject {
    _TtC18VisualIntelligence35VisualIntelligenceServiceCompatible * _compatService;
    _TtC18VisualIntelligence26VITextLookupFlowCompatible * _textLookupFlow;
}

+ (unsigned long long)parseFlowCacheVersion;

- (void).cxx_destruct;
- (void)clearCacheWithOption:(long long)arg1;
- (id)detectWithImage:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
- (id)init;
- (id)initWithNetworkTimeoutInterval:(long long)arg1;
- (id)lookupTextWithQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)newStreamingSession;
- (id)ontologyGraph;
- (id)parseWithVisualQuery:(id)arg1 cachedResult:(id)arg2 completion:(id /* block */)arg3;
- (id)parseWithVisualQuery:(id)arg1 cachedResults:(id)arg2 completion:(id /* block */)arg3;
- (id)parseWithVisualQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)pegasusPayloadWithParsedVisualQuery:(id)arg1 error:(id*)arg2;
- (id)refineRegionsWithRequest:(id)arg1 error:(id*)arg2;
- (id)searchWithParsedVisualQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)searchWithVisualQuery:(id)arg1 completion:(id /* block */)arg2;
- (id)submitUserFeedback:(id)arg1 completion:(id /* block */)arg2;
- (struct CGSize { double x1; double x2; })targetImageSizeForInputImageSize:(struct CGSize { double x1; double x2; })arg1;

@end

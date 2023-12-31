
@interface PHMediaFormatChainedConversionRequest : PHMediaFormatConversionCompositeRequest {
    PHMediaFormatConversionRequest * _dependentRequest;
    PHMediaFormatConversionRequest * _independentRequest;
    id /* block */  _successUpdateHandler;
}

@property (retain) PHMediaFormatConversionRequest *dependentRequest;
@property (retain) PHMediaFormatConversionRequest *independentRequest;
@property (copy) id /* block */ successUpdateHandler;

+ (id)chainedRequestForAdjustmentRenderRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id*)arg3;
+ (id)chainedRequestForRequest:(id)arg1 dependingOnRequest:(id)arg2 error:(id*)arg3 successUpdateHandler:(id /* block */)arg4;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)dependentRequest;
- (void)enqueueSubrequestsOnConversionManager:(id)arg1;
- (void)enumerateSubrequests:(id /* block */)arg1;
- (id)independentRequest;
- (void)postProcessSuccessfulCompositeRequest;
- (void)setDependentRequest:(id)arg1;
- (void)setIndependentRequest:(id)arg1;
- (void)setSuccessUpdateHandler:(id /* block */)arg1;
- (id /* block */)successUpdateHandler;

@end


@protocol CDMSsuInferenceClient

@required

- (void)processSsuInferenceRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: SIRINLUEXTERNALSSU_INFERENCESsuInferenceRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SIRINLUEXTERNALSSU_INFERENCESsuInferenceResponse *, NSError *, void*
- (void)setupSsuInference:(void *)arg1 serviceStateDirectory:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: SIRINLUEXTERNALSSU_INFERENCESsuInferenceSetup *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

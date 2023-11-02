
@protocol GTMTLCaptureService

@required

- (void)deregisterObserver:(unsigned long long)arg1;
- (unsigned long long)nextRequestID;
- (GTCaptureRequestToken *)query:(GTCaptureRequestBatch *)arg1;
- (unsigned long long)registerObserver:(id <GTMTLCaptureServiceObserver>)arg1;
- (GTCaptureRequestToken *)startWithDescriptor:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: GTCaptureDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GTCaptureCompletionState *, void*
- (void)stop;
- (GTCaptureRequestToken *)update:(GTCaptureRequestBatch *)arg1;

@end

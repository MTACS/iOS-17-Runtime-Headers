
@interface AppleIDSetupUI.AISFlowTask : NSObject <AISFlowTaskInfoProtocol> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cachedContinuation;
    void completed;
}

- (void).cxx_destruct;
- (id)init;
- (void)waitUntilLoadedWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*

@end

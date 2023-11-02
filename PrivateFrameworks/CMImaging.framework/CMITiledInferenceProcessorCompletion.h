
@interface CMITiledInferenceProcessorCompletion : NSObject {
    id /* block */  _completionHandler;
    bool  _completionHandlerExecuted;
    unsigned long long  _expectedStreamCompleteCount;
    bool  _metalComplete;
    unsigned long long  _metalErrors;
    bool  _streamComplete;
    unsigned long long  _streamCompleteCount;
    unsigned long long  _streamErrors;
}

- (void).cxx_destruct;
- (void)_finalCompletion;
- (id)initWithHandler:(id /* block */)arg1;
- (void)metalCompletion:(int)arg1;
- (void)networkTileCompletion:(int)arg1;
- (void)setExpectedTiles:(unsigned long long)arg1;

@end


@interface SNAnalyzerInfo : NSObject {
    SNAnalyzerHost * _analyzerHost;
    id /* block */  _completionHandler;
    NSError * _configurationError;
    bool  _configured;
    <SNAnalyzerCreating> * _request;
    id /* block */  _resultsHandler;
    <SNProcessing> * _sharedProcessor;
}

- (void).cxx_destruct;

@end

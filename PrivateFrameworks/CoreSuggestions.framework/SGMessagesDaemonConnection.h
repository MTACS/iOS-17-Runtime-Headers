
@interface SGMessagesDaemonConnection : NSObject {
    SGFuture * _daemonConnectionFuture;
    <SGDSuggestManagerMessagesProtocol> * _remoteSuggestionManagerForTesting;
}

- (void).cxx_destruct;
- (id)initWithDaemonConnectionFuture:(id)arg1;
- (id)remoteSuggestionManagerWithErrorHandler:(id /* block */)arg1;
- (void)setManagerForTesting:(id)arg1;

@end


@interface SNResourceCoordinatorXPCSubscriber : NSObject <SNResourceCoordinatorProtocol, SNResourceCoordinatorXPCProtocol> {
    void receiver;
}

- (void).cxx_destruct;
- (id)createSystemAudioAnalyzerWithError:(id*)arg1;
- (id)init;
- (void)xpcCreateSystemAudioAnalyzerWithCompletionHandler:(id /* block */)arg1;

@end

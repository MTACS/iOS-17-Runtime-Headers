
@interface SNAnalysisClient : NSObject {
    void connectionToServerGenerator;
    void pendingInvalidationHandlers;
    void queue;
    void xpcConnectionToServer;
}

+ (id)defaultClient;

- (void).cxx_destruct;
- (id)createRemoteSystemAudioAnalyzerWithInvalidationHandler:(id /* block */)arg1 queue:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initToConnectToMachServiceWithName:(id)arg1 queue:(id)arg2;
- (id)initWithConnectionGenerator:(id /* block */)arg1 queue:(id)arg2;

@end

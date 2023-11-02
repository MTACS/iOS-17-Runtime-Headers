
@interface SiriKitRuntime.ServerFallbackCapableRequestProcessor : SiriKitRuntime.ConversationRequestProcessor {
    void executeNLOnServerMessage;
    void gatedExecuteNLOnServer;
    void isUserOnActivePhoneCall;
    void requestHandledOnServer;
    void runSiriKitExecutorProcessor;
}

@end

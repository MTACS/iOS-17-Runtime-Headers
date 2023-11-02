
@interface SoundAnalysis.XPCProxyXPCHost : NSObject <SoundAnalysis.XPCProxyXPCProtocol> {
    void hosted;
}

- (void).cxx_destruct;
- (id)init;
- (void)xpcSendMessageWithData:(id)arg1 proxy:(id)arg2 completionHandler:(id /* block */)arg3;

@end

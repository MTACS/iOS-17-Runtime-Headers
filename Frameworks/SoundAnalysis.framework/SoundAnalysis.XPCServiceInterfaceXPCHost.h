
@interface SoundAnalysis.XPCServiceInterfaceXPCHost : NSObject <SoundAnalysis.XPCServiceInterfaceXPCProtocol> {
    void hosted;
}

- (void).cxx_destruct;
- (id)init;
- (void)xpcGetResourceCoordinatorWithCompletionHandler:(id /* block */)arg1;
- (void)xpcGetRunRequestFunctionWithCompletionHandler:(id /* block */)arg1;

@end

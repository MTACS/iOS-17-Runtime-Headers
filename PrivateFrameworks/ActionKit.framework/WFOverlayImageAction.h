
@interface WFOverlayImageAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)getImageInputs:(id /* block */)arg1 withInput:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithNoUserInterface:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;

@end


@interface WFSelectFilesAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)contentDestinationWithError:(id*)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;

@end


@interface WFSelectContactsAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (void)outputContacts:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;

@end

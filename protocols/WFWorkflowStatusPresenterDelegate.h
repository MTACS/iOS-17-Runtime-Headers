
@protocol WFWorkflowStatusPresenterDelegate <NSObject>

@required

- (void)statusPresenterDidConnectToService:(id <WFWorkflowStatusProtocol>)arg1;
- (void)statusPresenterDidDisconnect;

@end

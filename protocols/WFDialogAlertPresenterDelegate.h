
@protocol WFDialogAlertPresenterDelegate <NSObject, WFDialogXPCHostProtocol>

@required

- (void)dialogAlertPresenter:(id <WFDialogAlertPresenter>)arg1 didConnectToAlert:(id <WFDialogXPCProtocol>)arg2;
- (void)dialogAlertPresenterDidDeactivateAlert:(id <WFDialogAlertPresenter>)arg1;
- (void)dialogAlertPresenterDidDisconnectFromAlert:(id <WFDialogAlertPresenter>)arg1;
- (void)dialogAlertPresenterDidInvalidateAlert:(id <WFDialogAlertPresenter>)arg1;

@end


@interface _SWRemoveParticipantAlertRemoteController : _UIRemoteViewController <CKRemoveParticipantAlertRemoteViewControllerProtocol> {
    <_SWRemoveParticipantAlertRemoteControllerDelegate> * _delegate;
}

@property (nonatomic) <_SWRemoveParticipantAlertRemoteControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_promptToRemoveParticipant:(id)arg1 fromHighlight:(id)arg2 preferredStyle:(long long)arg3;
- (id)delegate;
- (void)dismissAlert;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

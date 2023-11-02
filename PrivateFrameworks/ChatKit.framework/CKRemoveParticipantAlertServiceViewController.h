
@interface CKRemoveParticipantAlertServiceViewController : UIViewController <CKRemoveParticipantAlertServiceViewControllerProtocol>

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)_dismissAndCleanup;
- (void)promptToRemoveParticipant:(id)arg1 fromHighlight:(id)arg2 usingPreferredStyle:(long long)arg3;
- (void)viewDidLoad;

@end

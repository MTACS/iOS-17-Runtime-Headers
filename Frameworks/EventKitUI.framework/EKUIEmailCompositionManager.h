
@interface EKUIEmailCompositionManager : NSObject <MFMailComposeViewControllerDelegate> {
    NSString * _bodyPrefix;
    MFMailComposeViewController * _composeViewController;
    EKEvent * _event;
    id /* block */  _messageSendingComplete;
    NSArray * _participantRecipients;
    NSString * _subjectPrefix;
}

@property (nonatomic, retain) MFMailComposeViewController *composeViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EKEvent *event;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ messageSendingComplete;
@property (readonly) Class superclass;
@property (readonly) UIViewController *viewController;

+ (id)_recipientEmailAddressesToDisplayNames:(id)arg1 withParticipantRecipients:(id)arg2;
+ (bool)canShowViewControllerForEvent:(id)arg1 withParticipantRecipients:(id)arg2;

- (void).cxx_destruct;
- (id)_htmlBodyForMailMessageWithNames:(id)arg1;
- (id)composeViewController;
- (id)event;
- (void)initViewController;
- (id)initWithEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 participantRecipients:(id)arg2 subjectPrefix:(id)arg3 bodyPrefix:(id)arg4;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id /* block */)messageSendingComplete;
- (void)setComposeViewController:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setMessageSendingComplete:(id /* block */)arg1;
- (id)viewController;

@end

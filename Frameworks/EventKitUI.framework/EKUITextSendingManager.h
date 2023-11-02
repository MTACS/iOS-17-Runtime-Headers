
@interface EKUITextSendingManager : NSObject <MFMessageComposeViewControllerDelegate> {
    MFMessageComposeViewController * _composeViewController;
    id /* block */  _messageSendingComplete;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ messageSendingComplete;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)addressesForRecipientsOnEvent:(id)arg1;
+ (bool)canSendMessageToRecipientsOnEvent:(id)arg1;
+ (void)getPhone:(id*)arg1 andEmail:(id*)arg2 forContact:(id)arg3;
+ (bool)messagingAvailable;

- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id /* block */)messageSendingComplete;
- (void)setMessageSendingComplete:(id /* block */)arg1;
- (void)setupControllerWithAddresses:(id)arg1;
- (id)viewController;

@end

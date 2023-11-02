
@interface PKRemoteShareableCredentialsMessageComposeViewController : _UIRemoteViewController <PKRemoteShareableCredentialsMessageComposeViewControllerProtocol> {
    <PKShareableCredentialsMessageComposeViewControllerDelegate> * _delegate;
    bool  _finished;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKShareableCredentialsMessageComposeViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)delegate;
- (void)messageComposeViewControllerDidFinishWithResult:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

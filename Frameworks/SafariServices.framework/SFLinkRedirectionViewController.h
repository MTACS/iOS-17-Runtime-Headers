
@interface SFLinkRedirectionViewController : SFSafariViewController <UIViewControllerTransitioningDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithURL:(id)arg1;
- (void)remoteViewController:(id)arg1 didResolveRedirectionWithURL:(id)arg2 appLink:(id)arg3;
- (void)setDefersAddingRemoteViewController:(bool)arg1;
- (void)viewDidLoad;

@end

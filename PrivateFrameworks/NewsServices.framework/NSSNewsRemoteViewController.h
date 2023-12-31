
@interface NSSNewsRemoteViewController : _UIRemoteViewController <NAVNewsArticleViewerRemoteProviderType>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)articleViewerRemoteProviderShouldDismissAnimated:(bool)arg1;
- (void)dismissAnimated:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

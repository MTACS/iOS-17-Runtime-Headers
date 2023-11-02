
@interface SBSUIRemoteAlertItemContentViewController : UIViewController <SBSUIRemoteAlertItemContentServiceInterface>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void)getPreferredContentSizeWithReplyBlock:(id /* block */)arg1;
- (void)invalidatePreferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

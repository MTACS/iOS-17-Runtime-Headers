
@interface AMSUIEngagementRemoteViewController : _UIRemoteViewController <AMSUIEngagementTaskHostInterface> {
    <AMSUIEngagementTaskHostInterface> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSUIEngagementTaskHostInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AMSUIEngagementTaskRemoteInterface> *remoteProxy;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)engagementTaskDidFinishWithResult:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (id)remoteProxy;
- (void)setDelegate:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

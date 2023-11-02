
@interface SKRemoteEngagementRemoteViewController : _UIRemoteViewController {
    <SKEngagementPresenterProtocol> * _delegate;
}

@property (nonatomic) <SKEngagementPresenterProtocol> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)engagementTaskDidFinishWithResult:(id)arg1 resultData:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;

@end

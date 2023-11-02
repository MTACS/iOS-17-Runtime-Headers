
@interface PKExtensionRemoteViewController : _UIRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol> {
    <PKExtensionRemoteViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKExtensionRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (void)setDelegate:(id)arg1;

@end

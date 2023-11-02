
@interface SFAddToHomeScreenRemoteViewController : _UIRemoteViewController <SFAddToHomeScreenRemoteProtocol> {
    <SFAddToHomeScreenRemoteViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SFAddToHomeScreenRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)delegate;
- (void)serviceViewControllerDidFinishWithResult:(bool)arg1;
- (void)setDelegate:(id)arg1;

@end

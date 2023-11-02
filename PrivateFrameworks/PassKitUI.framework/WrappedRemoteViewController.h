
@interface WrappedRemoteViewController : _UIRemoteViewController <PKClientShareSecureElementPassViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void)didCreateShareURL:(id)arg1 activationCode:(id)arg2 error:(id)arg3;
- (void)didFinishShareWithDidUserShare:(bool)arg1 error:(id)arg2;

@end

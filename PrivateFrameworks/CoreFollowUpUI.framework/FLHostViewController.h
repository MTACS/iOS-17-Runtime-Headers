
@interface FLHostViewController : _UIRemoteViewController <FLExtensionHostInterface, _UIRemoteViewControllerContaining>

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (id)_containedRemoteViewController;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end


@interface FASpotlightHostViewController : _UIRemoteViewController <_UIRemoteViewControllerContaining>

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requestViewControllerWithContactID:(id)arg1 completion:(id /* block */)arg2;
+ (id)serviceViewControllerInterface;

- (id)_containedRemoteViewController;

@end

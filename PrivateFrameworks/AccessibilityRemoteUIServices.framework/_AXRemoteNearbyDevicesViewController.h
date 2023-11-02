
@interface _AXRemoteNearbyDevicesViewController : _UIRemoteViewController <AXRemoteViewServiceExportedInterface> {
    id /* block */  _dismissHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)presentNearbyDevicesViewControllerWithConnectionHandler:(id /* block */)arg1 dismissalHandler:(id /* block */)arg2;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id /* block */)dismissHandler;
- (void)setDismissHandler:(id /* block */)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

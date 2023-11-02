
@interface __HMDDeviceController : HMDDeviceController {
    HMDAccountRegistry * _accountRegistry;
}

@property (readonly) HMDAccountRegistry *accountRegistry;

- (void).cxx_destruct;
- (void)__handleAddedAccount:(id)arg1;
- (void)__handleAddedDevice:(id)arg1;
- (id)accountRegistry;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 accountRegistry:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)updateWithDevice:(id)arg1 completionHandler:(id /* block */)arg2;

@end


@interface CloudSharingUI.HostingControllerAndModelUpdates : NSObject {
    void sourceAppBundleIDDidChangeBlock;
    void viewController;
}

@property (nonatomic, readonly) id /* block */ sourceAppBundleIDDidChangeBlock;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)init;
- (id)initWithViewController:(id)arg1 sourceAppBundleIDDidChangeBlock:(id /* block */)arg2;
- (id /* block */)sourceAppBundleIDDidChangeBlock;
- (id)viewController;

@end


@interface SKRemoteProductActivityViewController : _UIRemoteViewController <SKUIClientProductActivityViewController> {
    SKStoreProductActivityViewController * _productActivityViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SKStoreProductActivityViewController *productActivityViewController;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;
- (id)productActivityViewController;
- (void)setProductActivityViewController:(id)arg1;

@end

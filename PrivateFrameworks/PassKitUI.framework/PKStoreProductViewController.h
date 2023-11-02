
@interface PKStoreProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate> {
    <SKStoreProductViewControllerDelegate> * _productDelegate;
    bool  _suppressingFooter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SKStoreProductViewControllerDelegate> *productDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithItemIdentifier:(id)arg1;
- (id)productDelegate;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)setProductDelegate:(id)arg1;
- (void)setSupressingFooter:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end


@interface SKUIDismissingProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)productViewControllerDidFinish:(id)arg1;

@end

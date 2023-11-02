
@interface VUIMLFactory : NSObject

+ (void)_registerElements;
+ (id)sharedInstance;

- (id)URLForResource:(id)arg1;
- (id)_URLForResource:(id)arg1 inBundle:(id)arg2;
- (Class)collectionViewCellClassForElement:(id)arg1;
- (id)imageForResource:(id)arg1;
- (id)imageProxyForElement:(id)arg1 withLayout:(id)arg2;
- (id)init;
- (id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2;
- (id)viewForElement:(id)arg1 existingView:(id)arg2;

@end


@interface SKPurchaseIntent : NSObject {
    NSString * _appName;
    NSString * _bundleId;
    NSString * _productIdentifer;
    NSString * _productName;
}

- (void).cxx_destruct;
- (id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2;
- (id)initWithBundleId:(id)arg1 productIdentifier:(id)arg2 appName:(id)arg3 productName:(id)arg4;
- (void)send:(id /* block */)arg1;

@end

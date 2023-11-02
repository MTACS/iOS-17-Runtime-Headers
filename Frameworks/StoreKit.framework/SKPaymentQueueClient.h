
@interface SKPaymentQueueClient : NSObject <NSCopying> {
    bool  _allowsBootstrapCellularData;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    <SKPaymentQueueClientDelegate> * _delegate;
    long long  _environmentType;
    bool  _hidesConfirmationDialogs;
    bool  _ignoresInAppPurchaseRestriction;
    NSString * _productsRequestBundleIdentifier;
    NSString * _receiptDirectoryPath;
    bool  _requiresAuthenticationForPayment;
    NSNumber * _storeExternalVersion;
    NSNumber * _storeItemIdentifier;
    NSString * _vendorIdentifier;
}

@property (nonatomic) bool allowsBootstrapCellularData;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic) <SKPaymentQueueClientDelegate> *delegate;
@property (nonatomic) long long environmentType;
@property (nonatomic) bool hidesConfirmationDialogs;
@property (nonatomic) bool ignoresInAppPurchaseRestriction;
@property (nonatomic, copy) NSString *productsRequestBundleIdentifier;
@property (nonatomic, copy) NSString *receiptDirectoryPath;
@property (nonatomic) bool requiresAuthenticationForPayment;
@property (nonatomic, copy) NSNumber *storeExternalVersion;
@property (nonatomic, copy) NSNumber *storeItemIdentifier;
@property (nonatomic, copy) NSString *vendorIdentifier;

- (void).cxx_destruct;
- (bool)allowsBootstrapCellularData;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)delegate;
- (long long)environmentType;
- (bool)hidesConfirmationDialogs;
- (bool)ignoresInAppPurchaseRestriction;
- (id)initWithXPCEncoding:(id)arg1;
- (id)plist;
- (id)productsRequestBundleIdentifier;
- (id)receiptDirectoryPath;
- (bool)requiresAuthenticationForPayment;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnvironmentType:(long long)arg1;
- (void)setHidesConfirmationDialogs:(bool)arg1;
- (void)setIgnoresInAppPurchaseRestriction:(bool)arg1;
- (void)setProductsRequestBundleIdentifier:(id)arg1;
- (void)setReceiptDirectoryPath:(id)arg1;
- (void)setRequiresAuthenticationForPayment:(bool)arg1;
- (void)setStoreExternalVersion:(id)arg1;
- (void)setStoreItemIdentifier:(id)arg1;
- (void)setVendorIdentifier:(id)arg1;
- (id)storeExternalVersion;
- (id)storeItemIdentifier;
- (id)vendorIdentifier;

@end

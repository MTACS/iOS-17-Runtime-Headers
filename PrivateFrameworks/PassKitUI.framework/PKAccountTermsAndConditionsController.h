
@interface PKAccountTermsAndConditionsController : NSObject <QLPreviewControllerDataSource, QLPreviewControllerDelegate, QLPreviewItemDataProvider> {
    PKAccount * _account;
    id /* block */  _completionBlock;
    long long  _context;
    QLItem * _pdfItem;
    QLPreviewController * _previewController;
    NSData * _termsData;
    NSString * _termsFileName;
    NSString * _termsIdentifier;
    PKPaymentWebService * _webService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchTermsDataWithCompletion:(id /* block */)arg1;
- (id)_loadViewController;
- (id)initWithAccount:(id)arg1 webService:(id)arg2 context:(long long)arg3 termsIdentifier:(id)arg4;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerWillDismiss:(id)arg1;
- (id)provideDataForItem:(id)arg1;
- (void)termsViewControllerWithCompletion:(id /* block */)arg1;

@end

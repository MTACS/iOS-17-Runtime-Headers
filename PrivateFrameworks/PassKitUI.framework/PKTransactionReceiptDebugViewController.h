
@interface PKTransactionReceiptDebugViewController : PKSectionTableViewController <PKPaymentServiceDelegate, QLPreviewControllerDataSource, QLPreviewControllerDelegate, QLPreviewItemDataProvider> {
    PKPaymentService * _paymentService;
    QLPreviewController * _previewController;
    PKTransactionReceipt * _receipt;
    QLItem * _receiptPreviewItem;
    PKPaymentTransaction * _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_amountCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_headerFieldCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_infoCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_lineItemCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)_presentReceiptPreview;
- (id)_previewCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)_summaryItemCellForTableView:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithPaymentTransaction:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)provideDataForItem:(id)arg1;
- (bool)shouldMapSection:(unsigned long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;
- (void)viewDidLoad;

@end

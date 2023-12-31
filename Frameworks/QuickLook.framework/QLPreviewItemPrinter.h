
@interface QLPreviewItemPrinter : QLPreviewPrinter {
    NSObject<OS_dispatch_queue> * _accessPrinterQueue;
    bool  _didReceivePrinter;
    <QLPrintingProtocol> * _itemPrinter;
    QLItemPresenterViewController * _presenter;
    NSObject<OS_dispatch_semaphore> * _waitForPrinterSemaphore;
}

@property (nonatomic, retain) <QLPrintingProtocol> *itemPrinter;
@property (nonatomic, retain) QLItemPresenterViewController *presenter;

- (void).cxx_destruct;
- (void)_didReceivePrinter:(id)arg1;
- (void)_waitForPrinterSynchronously;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithItem:(id)arg1;
- (id)itemPrinter;
- (long long)numberOfPages;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)presenter;
- (id)printer;
- (void)setItemPrinter:(id)arg1;
- (void)setPresenter:(id)arg1;

@end

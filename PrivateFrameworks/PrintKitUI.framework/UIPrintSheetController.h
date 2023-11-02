
@interface UIPrintSheetController : NSObject {
    UIPrintPagesController * _pagesController;
    UIPrintInfo * _printInfo;
    long long * _selectionPageMap;
}

@property (nonatomic, retain) UIPrintPagesController *pagesController;
@property (nonatomic, retain) UIPrintInfo *printInfo;

- (void).cxx_destruct;
- (void)clearPagesCache;
- (long long)convertSelectionPageNumToPageNum:(long long)arg1;
- (void)dealloc;
- (void)generateWebKitThumbnailsWithCompletionBlock:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })getNUpLayout;
- (id)imageForSheetNum:(long long)arg1 showingPageView:(bool)arg2;
- (id)initWithPrintInfo:(id)arg1 printPageImageDelegate:(id)arg2;
- (long long)numberOfPagesInSelection;
- (long long)numberOfSheets:(bool)arg1;
- (long long)pageOffsetForRow:(long long)arg1 column:(long long)arg2 nUpLayout:(struct CGSize { double x1; double x2; })arg3;
- (id)pagesController;
- (id)printInfo;
- (void)recalculateWebKitPageCount;
- (void)setPagesController:(id)arg1;
- (void)setPrintInfo:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForSheetNum:(long long)arg1 showingPageView:(bool)arg2;
- (void)updateSelectionPageMap;

@end

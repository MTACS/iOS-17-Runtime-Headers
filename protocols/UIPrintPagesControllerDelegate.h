
@protocol UIPrintPagesControllerDelegate <NSObject>

@required

- (NSURL *)createWebKitPDFForAllPages;
- (void)drawImageForPageNum:(long long)arg1 toContext:(struct CGContext { }*)arg2 sheetSize:(struct CGSize { double x1; double x2; })arg3;
- (long long)numberOfPages;
- (struct CGSize { double x1; double x2; })paperSizeForPageNum:(long long)arg1;
- (void)recalculateWebKitPageCount;

@end

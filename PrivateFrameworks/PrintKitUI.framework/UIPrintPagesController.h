
@interface UIPrintPagesController : NSObject {
    NSCache * _cachedBasePageImages;
    NSCache * _cachedPageSizes;
    <UIPrintPagesControllerDelegate> * _delegate;
    UIPrintInfo * _printInfo;
    bool  _usingWebKitFormatter;
    NSOperationQueue * _webKitPrintingOperationsQueue;
    NSThread * _webKitThumbnailGenerationThread;
    struct CGPDFDocument { } * _webKitThumbnailPDFDocumentRef;
    NSURL * _webKitThumbnailPDFURL;
}

@property (retain) NSCache *cachedBasePageImages;
@property (retain) NSCache *cachedPageSizes;
@property (nonatomic) <UIPrintPagesControllerDelegate> *delegate;
@property (retain) UIPrintInfo *printInfo;
@property bool usingWebKitFormatter;
@property (retain) NSOperationQueue *webKitPrintingOperationsQueue;
@property (retain) NSThread *webKitThumbnailGenerationThread;
@property struct CGPDFDocument { }*webKitThumbnailPDFDocumentRef;
@property (retain) NSURL *webKitThumbnailPDFURL;

- (void).cxx_destruct;
- (id)baseImageForPageNum:(long long)arg1;
- (id)cachedBasePageImages;
- (id)cachedPageSizes;
- (void)clearPagesCache;
- (void)createPDFForAllPages;
- (void)dealloc;
- (id)delegate;
- (void)drawBorderAtRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2;
- (void)generateWebKitThumbnailsWithCompletionBlock:(id /* block */)arg1;
- (id)imageForPageNum:(long long)arg1 showingPageView:(bool)arg2;
- (id)initWithPrintInfo:(id)arg1 delegate:(id)arg2;
- (id)printInfo;
- (void)recalculateWebKitPageCount;
- (void)removeWebKitThumbnailPDF;
- (void)setCachedBasePageImages:(id)arg1;
- (void)setCachedPageSizes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setUsingWebKitFormatter:(bool)arg1;
- (void)setWebKitPrintingOperationsQueue:(id)arg1;
- (void)setWebKitThumbnailGenerationThread:(id)arg1;
- (void)setWebKitThumbnailPDFDocumentRef:(struct CGPDFDocument { }*)arg1;
- (void)setWebKitThumbnailPDFURL:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForPageNum:(long long)arg1;
- (bool)usingWebKitFormatter;
- (id)webKitPrintingOperationsQueue;
- (id)webKitThumbnailGenerationThread;
- (struct CGPDFDocument { }*)webKitThumbnailPDFDocumentRef;
- (id)webKitThumbnailPDFURL;

@end

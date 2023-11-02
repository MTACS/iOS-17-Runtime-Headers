
@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {
    struct RetainPtr<_WKFrameHandle> { 
        void *m_ptr; 
    }  _frameToPrint;
    struct Condition { 
        struct Atomic<bool> { 
            struct atomic<bool> { 
                struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
                    _Atomic bool __a_value; 
                } __a_; 
            } value; 
        } m_hasWaiters; 
    }  _printCompletionCondition;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { 
                    _Atomic unsigned char __a_value; 
                } __a_; 
            } value; 
        } m_byte; 
    }  _printLock;
    struct RetainPtr<CGImage *> { 
        void *m_ptr; 
    }  _printPreviewImage;
    struct RetainPtr<CGPDFDocument *> { 
        void *m_ptr; 
    }  _printedDocument;
    bool  _snapshotFirstPage;
    bool  _suppressPageCountRecalc;
}

@property (nonatomic, retain) _WKFrameHandle *frameToPrint;
@property (nonatomic) bool snapshotFirstPage;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_drawInRectUsingBitmap:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (void)_drawInRectUsingPDF:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (void)_invalidatePrintRenderingState;
- (struct CGImage { }*)_printPreviewImage;
- (struct CGPDFDocument { }*)_printedDocument;
- (long long)_recalcPageCount;
- (void)_setNeedsRecalc;
- (void)_setPrintPreviewImage:(struct CGImage { }*)arg1;
- (void)_setPrintedDocument:(struct CGPDFDocument { }*)arg1;
- (void)_setSnapshotPaperRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_shouldDrawUsingBitmap;
- (void)_waitForPrintedDocumentOrImage;
- (id)_webView;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (id)frameToPrint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (bool)requiresMainThread;
- (void)setFrameToPrint:(id)arg1;
- (void)setSnapshotFirstPage:(bool)arg1;
- (bool)snapshotFirstPage;

@end

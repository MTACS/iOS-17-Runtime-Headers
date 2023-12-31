
@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {
    WebFrame * _frameToPrint;
    UIWebPaginationInfo * _paginationInfo;
}

@property (nonatomic, retain) WebFrame *frameToPrint;

- (void).cxx_destruct;
- (long long)_recalcPageCount;
- (void)_resetPaginationInfo;
- (id)_webDocumentView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (id)frameToPrint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForPageAtIndex:(long long)arg1;
- (void)removeFromPrintPageRenderer;
- (void)setFrameToPrint:(id)arg1;

@end

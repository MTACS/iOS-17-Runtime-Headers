
@interface CKTranscriptPrintPageRenderer : UIPrintPageRenderer {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentPrintableRect;
    long long  _numberOfPagesForCurrentConfiguration;
    UIScrollView * _scrollView;
    CKPrintTranscriptCollectionViewController * _transcriptCollectionViewController;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentPrintableRect;
@property long long numberOfPagesForCurrentConfiguration;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, retain) CKPrintTranscriptCollectionViewController *transcriptCollectionViewController;

+ (void)renderViewWithText:(id)arg1 withOffsetVertical:(double)arg2;

- (void).cxx_destruct;
- (long long)__computedNumberOfPagesForPrintableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_determineNumberOfPages;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentPrintableRect;
- (void)drawPageAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)drawScrollViewAtIndex:(long long)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithTranscriptCollectionViewController:(id)arg1;
- (long long)numberOfPages;
- (long long)numberOfPagesForCurrentConfiguration;
- (id)scrollView;
- (void)setCurrentPrintableRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setNumberOfPagesForCurrentConfiguration:(long long)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTranscriptCollectionViewController:(id)arg1;
- (id)transcriptCollectionViewController;

@end


@interface UICreatePDFActivityPrintPaper : UIPrintPaper {
    struct CGSize { 
        double width; 
        double height; 
    }  __paperSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } _paperSize;

- (id)_keywordForPDFMetadata;
- (struct CGSize { double x1; double x2; })_paperSize;
- (id)initWithPaperSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })paperSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })printableRect;
- (void)set_paperSize:(struct CGSize { double x1; double x2; })arg1;

@end

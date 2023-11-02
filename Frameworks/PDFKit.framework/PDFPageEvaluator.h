
@interface PDFPageEvaluator : NSObject {
    bool  _candidateForOCR;
    struct CGPDFContentStream { } * _contentStream;
    struct CGPDFContentStream { } * _cs;
    struct CGPDFGState { } * _gstate;
    struct CGPDFPage { } * _page;
    unsigned long long  _pageArea;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _pageBounds;
    struct CGPDFRState { } * _rstate;
    bool  _scanned;
    struct CGPDFOperatorTable { } * _table;
}

@property (getter=isCandidateForOCR, nonatomic) bool candidateForOCR;
@property (readonly) struct CGPDFContentStream { }*contentStream;
@property (readonly) struct CGPDFRState { }*rstate;

+ (id)asyncWorkQueue;
+ (struct CGPDFOperatorTable { }*)createOperatorTable;
+ (bool)isPageCandidateForOCR:(id)arg1;
+ (void)isPageCandidateForOCR:(id)arg1 completion:(id /* block */)arg2;

- (struct CGPDFContentStream { }*)contentStream;
- (void)dealloc;
- (void)failCandidateForOCR:(struct CGPDFScanner { }*)arg1;
- (id)initWithPage:(id)arg1;
- (id)initWithParent:(id)arg1;
- (id)initWithParent:(id)arg1 stream:(struct CGPDFStream { }*)arg2 resources:(struct CGPDFDictionary { }*)arg3;
- (bool)isCandidateForOCR;
- (void)op_Do:(struct CGPDFScanner { }*)arg1;
- (void)op_Q:(struct CGPDFScanner { }*)arg1;
- (void)op_TJ:(struct CGPDFScanner { }*)arg1;
- (void)op_Tj:(struct CGPDFScanner { }*)arg1;
- (void)op_cm:(struct CGPDFScanner { }*)arg1;
- (void)op_doublequote:(struct CGPDFScanner { }*)arg1;
- (void)op_q:(struct CGPDFScanner { }*)arg1;
- (void)op_singlequote:(struct CGPDFScanner { }*)arg1;
- (struct CGPDFRState { }*)rstate;
- (void)setCandidateForOCR:(bool)arg1;

@end

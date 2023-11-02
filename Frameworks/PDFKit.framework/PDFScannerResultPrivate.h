
@interface PDFScannerResultPrivate : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  bounds;
    DDScannerResult * ddResult;
    bool  hasActionsForResult;
    bool  hasRunActionsForResult;
    struct __DDHighlight { } * highlightRef;
    PDFPage * page;
    NSArray * rects;
    bool  resultIsPastDate;
}

- (void).cxx_destruct;

@end

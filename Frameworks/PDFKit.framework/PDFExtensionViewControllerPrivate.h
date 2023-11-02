
@interface PDFExtensionViewControllerPrivate : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  bottomRightSelectionPoint;
    long long  currentGestureState;
    bool  didCancelActiveSearch;
    struct CGSize { 
        double width; 
        double height; 
    }  documentViewSize;
    bool  hasSelection;
    <PDFHostProtocol> * hostProxy;
    PDFView * pdfView;
    NSMutableArray * searchResults;
    PDFSelection * searchSelection;
    NSString * searchString;
    struct CGPoint { 
        double x; 
        double y; 
    }  topLeftSelectionPoint;
}

- (void).cxx_destruct;

@end

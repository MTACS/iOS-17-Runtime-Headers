
@interface PDFActionRemoteGoToPrivateVars : NSObject {
    PDFDestination * destination;
    unsigned long long  pageIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  point;
    NSURL * url;
}

- (void).cxx_destruct;

@end

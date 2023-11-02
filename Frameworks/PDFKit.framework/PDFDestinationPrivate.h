
@interface PDFDestinationPrivate : NSObject {
    struct CGPDFArray { } * array;
    double  bottom;
    PDFDocument * document;
    double  left;
    PDFPage * page;
    double  right;
    double  top;
    int  type;
    double  zoom;
}

- (void).cxx_destruct;

@end

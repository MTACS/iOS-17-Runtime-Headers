
@interface PDFFormPrivateVars : NSObject {
    struct CGPDFString { } * appearString;
    PDFDocument * document;
    NSMutableArray * fieldArray;
}

- (void).cxx_destruct;

@end

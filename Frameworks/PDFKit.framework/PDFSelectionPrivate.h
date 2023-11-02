
@interface PDFSelectionPrivate : NSObject {
    struct __CFArray { } * cgSelections;
    UIColor * color;
    PDFDocument * document;
    bool  forceBreaks;
    NSMutableArray * pageRanges;
    NSMutableArray * pages;
    NSUUID * pdfSelectionUUID;
}

- (void).cxx_destruct;

@end

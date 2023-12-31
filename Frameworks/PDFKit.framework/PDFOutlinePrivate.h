
@interface PDFOutlinePrivate : NSObject {
    PDFAction * action;
    NSMutableArray * children;
    bool  childrenLoaded;
    struct __CFDictionary { } * dictionary;
    PDFDocument * document;
    bool  open;
    PDFOutline * parent;
    struct CGPDFDictionary { } * srcDictionary;
    NSString * title;
}

- (void).cxx_destruct;

@end

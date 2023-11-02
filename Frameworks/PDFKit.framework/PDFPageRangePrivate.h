
@interface PDFPageRangePrivate : NSObject {
    PDFPage * page;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  range;
}

- (void).cxx_destruct;

@end

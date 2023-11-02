
@interface PDFTextPosition : UITextPosition {
    long long  _offset;
    PDFPage * _page;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithOffset:(long long)arg1 onPage:(id)arg2;
- (long long)offset;
- (id)page;

@end

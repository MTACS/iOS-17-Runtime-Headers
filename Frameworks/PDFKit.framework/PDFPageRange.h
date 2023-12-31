
@interface PDFPageRange : NSObject {
    PDFPageRangePrivate * _private;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithPage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)isEqual:(id)arg1;
- (id)page;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setPage:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end

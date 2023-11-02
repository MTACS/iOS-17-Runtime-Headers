
@interface PDFDetectedForm : NSObject {
    long long  _displayBox;
    unsigned long long  _fieldCount;
    struct vector<PDFDetectedFormRow, std::allocator<PDFDetectedFormRow>> { 
        struct PDFDetectedFormRow {} *__begin_; 
        struct PDFDetectedFormRow {} *__end_; 
        struct __compressed_pair<PDFDetectedFormRow *, std::allocator<PDFDetectedFormRow>> { 
            struct PDFDetectedFormRow {} *__value_; 
        } __end_cap_; 
    }  _rows;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly) long long displayBox;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)_classifyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct vector<const CGDisplayListEntry *, std::allocator<const CGDisplayListEntry *>> { struct CGDisplayListEntry {} **x1; struct CGDisplayListEntry {} **x2; struct __compressed_pair<const CGDisplayListEntry **, std::allocator<const CGDisplayListEntry *>> { struct CGDisplayListEntry {} **x_3_1_1; } x3; })_collectGlyphEntriesInDisplayList:(struct CGDisplayList { }*)arg1 medianGlyphHeight:(double*)arg2;
- (void)_insertFieldRect:(const struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 ofKind:(long long)arg2;
- (unsigned long long)count;
- (id)detectedFormFieldAtIndex:(unsigned long long)arg1;
- (id)detectedFormFieldNearestPoint:(struct CGPoint { double x1; double x2; })arg1;
- (long long)displayBox;
- (id)initWithPage:(id)arg1 displayBox:(long long)arg2;

@end

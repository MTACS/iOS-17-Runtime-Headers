
@interface ICPreviewLayoutManager : ICBaseLayoutManager {
    bool  _insideSystemPaper;
    unsigned long long  _maxCharacterCount;
    NSTextStorage * _strongTextStorage;
}

@property (getter=isInsideSystemPaper, nonatomic) bool insideSystemPaper;
@property (nonatomic) unsigned long long maxCharacterCount;
@property (nonatomic, retain) NSTextStorage *strongTextStorage;

- (void).cxx_destruct;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)drawTodoItemForListRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphStyle:(id)arg2 atOrigin:(struct CGPoint { double x1; double x2; })arg3;
- (void)drawTodosForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atOrigin:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithNote:(id)arg1 maxCharacterCount:(unsigned long long)arg2 textContainer:(id)arg3 textController:(id)arg4;
- (bool)isInsideSystemPaper;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (unsigned long long)maxCharacterCount;
- (void)setInsideSystemPaper:(bool)arg1;
- (void)setMaxCharacterCount:(unsigned long long)arg1;
- (void)setStrongTextStorage:(id)arg1;
- (id)strongTextStorage;
- (id)todoImageForParagraphStyle:(id)arg1;

@end

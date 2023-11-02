
@interface NSTextTable : NSTextBlock <NSSecureCoding> {
    unsigned long long  _numCols;
    unsigned long long  _tableFlags;
}

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRectForCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textContainer:(id)arg2;
- (id)_descriptionAtIndex:(unsigned long long)arg1 text:(id)arg2;
- (bool)_missingColumnsForRowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 blockIndex:(unsigned long long)arg2 text:(id)arg3;
- (id)_rowArrayForBlock:(id)arg1 atIndex:(unsigned long long)arg2 text:(id)arg3 layoutManager:(id)arg4 containerWidth:(double)arg5 withRepetitions:(bool)arg6 collapseBorders:(bool)arg7 rowCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg8 indexInRow:(unsigned long long*)arg9 startingRow:(long long*)arg10 startingColumn:(long long*)arg11 previousRowBlockHelper:(id*)arg12;
- (void)_setTableFlags:(unsigned long long)arg1;
- (unsigned long long)_tableFlags;
- (void)_takeValuesFromTextBlock:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsRectForBlock:(id)arg1 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 textContainer:(id)arg4 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (bool)collapsesBorders;
- (void)dealloc;
- (void)drawBackgroundForBlock:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inView:(id)arg3 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 layoutManager:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (bool)hidesEmptyCells;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)layoutAlgorithm;
- (unsigned long long)numberOfColumns;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForBlock:(id)arg1 layoutAtPoint:(struct CGPoint { double x1; double x2; })arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 textContainer:(id)arg4 characterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (void)setCollapsesBorders:(bool)arg1;
- (void)setHidesEmptyCells:(bool)arg1;
- (void)setLayoutAlgorithm:(unsigned long long)arg1;
- (void)setNumberOfColumns:(unsigned long long)arg1;

@end
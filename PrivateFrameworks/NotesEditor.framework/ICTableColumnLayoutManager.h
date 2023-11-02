
@interface ICTableColumnLayoutManager : ICLayoutManager {
    NSUUID * _columnID;
    ICTableColumnTextStorage * _columnTextStorage;
    NSMutableSet * _currentlyHiddenSubviews;
    NSArray * _hiddenRows;
    ICTableLayoutManager * _tableLayoutManager;
    NSTextContainer * _textContainer;
}

@property (readonly) NSUUID *columnID;
@property (nonatomic, readonly) ICTableColumnTextStorage *columnTextStorage;
@property (nonatomic, readonly) NSMutableSet *currentlyHiddenSubviews;
@property (nonatomic, retain) NSArray *hiddenRows;
@property (nonatomic, readonly) ICTableLayoutManager *tableLayoutManager;
@property (nonatomic, readonly) NSTextContainer *textContainer;
@property (readonly) double width;

- (void).cxx_destruct;
- (id)columnID;
- (id)columnTextStorage;
- (id)currentlyHiddenSubviews;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)ensureCellExistsAtRowID:(id)arg1;
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 targetAttachment:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRangeForBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })glyphRangeForRowID:(id)arg1;
- (id)glyphRangesForRows:(id)arg1;
- (double)heightOfCellAtRowID:(id)arg1;
- (id)hiddenRows;
- (id)initWithTableLayoutManager:(id)arg1 columnID:(id)arg2;
- (id)rectsForGlyphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeRow:(id)arg1;
- (void)setHiddenRows:(id)arg1;
- (id)tableLayoutManager;
- (id)textContainer;
- (double)width;

@end

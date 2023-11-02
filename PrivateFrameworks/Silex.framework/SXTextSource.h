
@interface SXTextSource : NSObject {
    <SXTextSourceDataSource> * _dataSource;
    <SXTextStyleFontDescribing> * _defaultFontDescribing;
    SXTextSourceDefaults * _defaults;
    NSMutableIndexSet * _deletedRangeOffsets;
    <SXDocumentLanguageProviding> * _documentLanguageProvider;
    <SXFontAttributesConstructor> * _fontAttributeConstructor;
    NSMutableIndexSet * _insertedRangeOffsets;
    NSMutableIndexSet * _rangesExcludedOfParagraphSpacing;
    <SXSmartFieldFactory> * _smartFieldFactory;
    NSString * _string;
}

@property (nonatomic, readonly) <SXTextSourceDataSource> *dataSource;
@property (nonatomic, readonly) <SXTextStyleFontDescribing> *defaultFontDescribing;
@property (nonatomic, readonly) SXTextSourceDefaults *defaults;
@property (nonatomic, retain) NSMutableIndexSet *deletedRangeOffsets;
@property (nonatomic, readonly) <SXDocumentLanguageProviding> *documentLanguageProvider;
@property (nonatomic, readonly) <SXFontAttributesConstructor> *fontAttributeConstructor;
@property (nonatomic, retain) NSMutableIndexSet *insertedRangeOffsets;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, retain) NSMutableIndexSet *rangesExcludedOfParagraphSpacing;
@property (nonatomic, readonly) <SXSmartFieldFactory> *smartFieldFactory;
@property (nonatomic, readonly) NSString *string;

- (void).cxx_destruct;
- (void)applyAdditionsOnTextTangierStorage:(id)arg1;
- (void)applyListStylingOnTextTangierStorage:(id)arg1 usingAttributesMap:(id)arg2;
- (void)applyStylingOnTextTangierStorage:(id)arg1;
- (id)attributesForTextStyle:(id)arg1 onParagraphStyle:(id)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 resultingDropCapStyle:(id*)arg4 textResizer:(id)arg5 fontFace:(id)arg6;
- (id)characterStyleFromAttributes:(id)arg1 context:(id)arg2;
- (id)cleanString:(id)arg1;
- (id)dataSource;
- (id)defaultFontDescribing;
- (id)defaults;
- (id)deletedRangeOffsets;
- (id)description;
- (id)documentLanguageProvider;
- (id)fontAttributeConstructor;
- (id)fontDescriptionsForTextStyleFontDescription:(id)arg1 defaultTextStyleFontDesciptions:(id)arg2;
- (id)fontFaceForTextStyleFontDescription:(id)arg1 defaultTextStyleFontDescription:(id)arg2 fontAttributes:(id)arg3 fontSize:(long long)arg4;
- (long long)fontSizeForTextStyle:(id)arg1;
- (id)initWithString:(id)arg1 smartFieldFactory:(id)arg2 dataSource:(id)arg3 documentLanguageProvider:(id)arg4 fontAttributesConstructor:(id)arg5;
- (id)insertedRangeOffsets;
- (int)listLabelTypeForListType:(unsigned long long)arg1;
- (int)listNumberTypeForListType:(unsigned long long)arg1;
- (id)locale;
- (unsigned int)paragraphAlignmentForTextAlignment:(long long)arg1;
- (id)populateArray:(id)arg1 withValue:(id)arg2 forSize:(unsigned long long)arg3;
- (id)randomColorWithAlpha:(double)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInBounds:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 maxLength:(unsigned long long)arg2;
- (id)rangesExcludedOfParagraphSpacing;
- (long long)scaledFontSizeForFontSize:(long long)arg1;
- (void)setDeletedRangeOffsets:(id)arg1;
- (void)setInsertedRangeOffsets:(id)arg1;
- (void)setRangesExcludedOfParagraphSpacing:(id)arg1;
- (id)smartFieldFactory;
- (id)string;
- (void)transform:(id)arg1 forTextStyle:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end

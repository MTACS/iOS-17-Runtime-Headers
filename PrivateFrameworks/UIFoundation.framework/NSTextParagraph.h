
@interface NSTextParagraph : NSTextElement {
    NSAttributedString * _attributedString;
    NSDictionary * _attributes;
    unsigned char  _containsTextAttachments;
    long long  _fallbackBaseDirection;
    bool  _isBeginningOfParagraph;
    bool  _isEndOfParagraph;
    NSTextRange * _paragraphContentRange;
    NSTextRange * _paragraphSeparatorRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    long long  _resolvedBaseDirection;
    NSMapTable * _textElementLocationTable;
    NSMutableArray * _textLayoutFragments;
}

@property (readonly) NSAttributedString *attributedString;
@property (copy) NSDictionary *attributes;
@property bool isBeginningOfParagraph;
@property bool isEndOfParagraph;
@property (readonly) NSTextRange *paragraphContentRange;
@property (readonly) NSTextRange *paragraphSeparatorRange;

+ (id)textParagraphsForAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (bool)_containsTextAttachments;
- (long long)_resolvedBaseWritingDirectionWithFallbackDirection:(long long)arg1;
- (void)_setContainsTextAttachments:(bool)arg1;
- (void)_setElementTextLocation:(id)arg1 forCharacterIndex:(unsigned long long)arg2;
- (id)_textElementLocationForCharacterIndex:(unsigned long long)arg1;
- (id)attributedString;
- (id)attributes;
- (void)dealloc;
- (id)description;
- (void)enumerateSubstringsFromLocation:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateSubstringsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (struct CGSize { double x1; double x2; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg1;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (id)initWithTextAttachment:(id)arg1 attributes:(id)arg2;
- (id)initWithTextContentManager:(id)arg1;
- (bool)isBeginningOfParagraph;
- (bool)isEndOfParagraph;
- (id)locationForCharacterIndex:(long long)arg1 actualRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)locationForCharacterIndex:(long long)arg1 dataSourceLocationsOnly:(bool)arg2 actualRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)paragraphContentRange;
- (id)paragraphRange;
- (id)paragraphSeparatorRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForLocation:(id)arg1 allowsTrailingEdge:(bool)arg2;
- (void)setAttributedString:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setIsBeginningOfParagraph:(bool)arg1;
- (void)setIsEndOfParagraph:(bool)arg1;
- (void)setParagraphContentRange:(id)arg1;
- (void)setParagraphSeparatorRange:(id)arg1;
- (void)synchronizeDocumentRange;

@end

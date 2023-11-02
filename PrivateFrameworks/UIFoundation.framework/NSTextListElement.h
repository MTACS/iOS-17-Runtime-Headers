
@interface NSTextListElement : NSTextParagraph {
    NSArray * _childElements;
    NSAttributedString * _contents;
    long long  _contentsLocationOffset;
    bool  _contentsOnly;
    long long  _indentLevel;
    long long  _itemNumber;
    NSDictionary * _markerAttributes;
    id /* block */  _markerTextAttributeOverrides;
    id /* block */  _markerTextAttributesForTextList;
    NSTextListElement * _parentElement;
    NSTextList * _textList;
}

@property (readonly) long long _contentsLocationOffset;
@property (readonly) NSAttributedString *attributedString;
@property (readonly, copy) NSArray *childElements;
@property (readonly) NSAttributedString *contents;
@property (readonly) NSDictionary *markerAttributes;
@property (copy) id /* block */ markerTextAttributeOverrides;
@property (copy) id /* block */ markerTextAttributesForTextList;
@property NSTextListElement *parentElement;
@property (readonly) NSTextList *textList;

+ (id)_createChildElementsFromAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 indentLevel:(long long)arg3 includesTextListMarkers:(bool)arg4 effectiveRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 textListElementInstantiationCallback:(id /* block */)arg6;
+ (id)_createElementWithChildElements:(id)arg1 textList:(id)arg2 nestingLevel:(long long)arg3;
+ (id)_createTextListElementFromAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 indentLevel:(long long)arg3 includesTextListMarkers:(bool)arg4 effectiveRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg5 textListElementInstantiationCallback:(id /* block */)arg6;
+ (id)_createUpdatedTextTabsForTextTabs:(id)arg1 markerLocation:(double)arg2 listLocation:(double)arg3;
+ (void)_fillTextListElement:(id)arg1 toAttributedString:(id)arg2;
+ (id)_formattedAttributedStringForRootTextListElement:(id)arg1;
+ (id)_rootTextListElementFromAttributedString:(id)arg1 atIndex:(long long)arg2 options:(unsigned long long)arg3 effectiveRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 textListElementInstantiationCallback:(id /* block */)arg5;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })_textListElementContentsRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inAttributedString:(id)arg2 hadMarker:(out bool*)arg3;
+ (id)textListElementWithChildElements:(id)arg1 textList:(id)arg2 nestingLevel:(long long)arg3;
+ (id)textListElementWithContents:(id)arg1 markerAttributes:(id)arg2 textList:(id)arg3 childElements:(id)arg4;

- (void).cxx_destruct;
- (bool)_appendsParagraphSeparator;
- (long long)_contentsLocationOffset;
- (id)_createConfiguredParagraphStyleForParagraphStyle:(id)arg1;
- (long long)_indentLevel;
- (double)_indentOffset;
- (double)_markerOffset;
- (id)_markerString;
- (id)_markerTextAttributesForTextList:(id)arg1 attributes:(id)arg2;
- (void)_reparentWithTextListElement:(id)arg1 itemNumber:(long long)arg2;
- (id)attributedString;
- (id)childElements;
- (id)contents;
- (bool)contentsOnly;
- (void)dealloc;
- (long long)indentLevel;
- (id)initWithParentElement:(id)arg1 textList:(id)arg2 contents:(id)arg3 markerAttributes:(id)arg4 childElements:(id)arg5;
- (bool)isRepresentedElement;
- (long long)itemNumber;
- (id)locationForCharacterIndex:(long long)arg1 dataSourceLocationsOnly:(bool)arg2 actualRange:(out struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)markerAttributes;
- (id /* block */)markerTextAttributeOverrides;
- (id /* block */)markerTextAttributesForTextList;
- (id)parentElement;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForLocation:(id)arg1 allowsTrailingEdge:(bool)arg2;
- (void)setMarkerTextAttributeOverrides:(id /* block */)arg1;
- (void)setMarkerTextAttributesForTextList:(id /* block */)arg1;
- (void)setParagraphContentRange:(id)arg1;
- (void)setParentElement:(id)arg1;
- (id)textList;
- (id)textListElementWithChildElements:(id)arg1;

@end

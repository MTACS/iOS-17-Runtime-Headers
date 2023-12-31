
@protocol TSWPTextSource <NSObject>

@required

- (bool)adjustRangesByDelta:(long long)arg1;
- (TSWPAttachment *)attachmentAtCharIndex:(unsigned long long)arg1;
- (TSWPAttachment *)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(bool)arg2 attributesTable:(id)arg3 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (TSWPCharacterStyle *)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (struct __CFDictionary { }*)createFilteredCoreTextAttributes:(struct __CFDictionary { }*)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 filterDelegate:(id <TSWPCoreTextPropertiesFilterDelegate>)arg3;
- (double)filteredCoreTextAttributesFontScaleEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 filterDelegate:(id <TSWPCoreTextPropertiesFilterDelegate>)arg2;
- (TSWPFootnoteReferenceAttachment *)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 locale:(struct __CFLocale { }*)arg3 hyphenChar:(unsigned int*)arg4;
- (bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (TSWPParagraphStyle *)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (TSWPSmartField *)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (NSArray *)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)storageLength;
- (NSString *)string;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(bool)arg2;

@optional

- (void)enumerateSmartFieldsWithAttributeKind:(void *)arg1 inRange:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: unsigned int, struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, struct _NSRange { unsigned long long x1; unsigned long long x2; }, bool*, void*
- (void)enumerateWithAttributeKind:(void *)arg1 inRange:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 10: unsigned int, struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, struct _NSRange { unsigned long long x1; unsigned long long x2; }, bool*, void*
- (bool)hasSmartFieldsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (NSString *)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end

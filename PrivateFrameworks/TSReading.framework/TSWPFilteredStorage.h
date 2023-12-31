
@interface TSWPFilteredStorage : NSObject <TSWPTextSource> {
    unsigned long long  _length;
    TSWPDeletionRangeMap * _rangeMap;
    TSWPStorage * _storage;
    unsigned long long  _storageLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)adjustRangesByDelta:(long long)arg1;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(bool)arg2 attributesTable:(id)arg3 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (struct __CFDictionary { }*)createFilteredCoreTextAttributes:(struct __CFDictionary { }*)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 filterDelegate:(id)arg3;
- (void)dealloc;
- (void)enumerateSmartFieldsWithAttributeKind:(unsigned int)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateWithAttributeKind:(unsigned int)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usingBlock:(id /* block */)arg3;
- (double)filteredCoreTextAttributesFontScaleEffectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 filterDelegate:(id)arg2;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (bool)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (bool)hasSmartFieldsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 locale:(struct __CFLocale { }*)arg3 hyphenChar:(unsigned int*)arg4;
- (id)initWithStorage:(id)arg1 subRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithStorage:(id)arg1 subRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 removeRanges:(id)arg3;
- (bool)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (unsigned long long)nextCharacterIndex:(unsigned long long)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (unsigned long long)previousCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })scanBackwardForWordAtCharIndex:(unsigned long long)arg1;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3;
- (id)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)storageLength;
- (id)string;
- (id)substringWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(bool)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(bool)arg2;

@end

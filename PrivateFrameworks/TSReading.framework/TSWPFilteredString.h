
@interface TSWPFilteredString : NSString {
    unsigned long long  _length;
    TSWPDeletionRangeMap * _rangeMap;
    TSWPRangeArray * _sourceRanges;
    NSString * _sourceString;
}

@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, retain) TSWPDeletionRangeMap *rangeMap;
@property (nonatomic, readonly, retain) TSWPRangeArray *sourceRanges;
@property (nonatomic, retain) NSString *sourceString;

- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedFromStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })charRangeMappedToStorage:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithString:(id)arg1 subrange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 removeRanges:(id)arg3;
- (unsigned long long)length;
- (id)rangeMap;
- (void)setRangeMap:(id)arg1;
- (void)setSourceString:(id)arg1;
- (id)sourceRanges;
- (id)sourceString;

@end

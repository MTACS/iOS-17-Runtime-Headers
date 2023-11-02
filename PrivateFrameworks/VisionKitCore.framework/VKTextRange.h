
@interface VKTextRange : VKBaseTextRange <NSCopying> {
    long long  _emptyIndex;
    NSIndexSet * _indexSet;
    NSArray * _nsRangeArray;
    NSArray * _rangeArray;
}

@property (nonatomic, readonly) bool containsMultipleRanges;
@property (nonatomic) long long emptyIndex;
@property (nonatomic, readonly) VKTextPosition *end;
@property (nonatomic, readonly) unsigned long long endOffset;
@property (nonatomic, retain) NSIndexSet *indexSet;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isNSNotFound;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } nsRange;
@property (nonatomic, retain) NSArray *nsRangeArray;
@property (nonatomic, retain) NSArray *rangeArray;
@property (nonatomic, readonly) unsigned long long rangeCount;
@property (nonatomic, readonly) VKTextPosition *start;
@property (nonatomic, readonly) unsigned long long startOffset;
@property (nonatomic, readonly) unsigned long long totalLength;

+ (id)defaultRange;
+ (id)emptyRange;
+ (id)emptyRangeWithOffset:(unsigned long long)arg1;
+ (id)emptyRangeWithPosition:(id)arg1;
+ (id)rangeWithNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)rangeWithNSRanges:(id)arg1;
+ (id)rangeWithStart:(id)arg1 end:(id)arg2;
+ (id)rangeWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;
+ (id)rangeWithVKRanges:(id)arg1;

- (void).cxx_destruct;
- (bool)containsMultipleRanges;
- (bool)containsTextPosition:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)emptyIndex;
- (id)end;
- (unsigned long long)endOffset;
- (unsigned long long)hash;
- (id)indexSet;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithStart:(id)arg1 end:(id)arg2;
- (id)initWithStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2;
- (bool)intersectsNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isNSNotFound;
- (unsigned long long)length;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })nsRange;
- (id)nsRangeArray;
- (id)rangeArray;
- (unsigned long long)rangeCount;
- (void)setEmptyIndex:(long long)arg1;
- (void)setIndexSet:(id)arg1;
- (void)setNsRangeArray:(id)arg1;
- (void)setRangeArray:(id)arg1;
- (id)start;
- (unsigned long long)startOffset;
- (id)summaryDescription;
- (unsigned long long)totalLength;

@end

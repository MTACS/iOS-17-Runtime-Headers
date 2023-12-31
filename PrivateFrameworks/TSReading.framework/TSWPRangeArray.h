
@interface TSWPRangeArray : NSObject <NSCopying> {
    void * _rangeVectorOpaque;
}

@property (nonatomic, readonly) unsigned long long finish;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) unsigned long long rangeCount;
@property (nonatomic, readonly) unsigned long long start;

- (void)addRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateRangesUsingBlock:(id /* block */)arg1;
- (unsigned long long)finish;
- (id)init;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)initWithRangeVector:(const void*)arg1;
- (bool)isEmpty;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangeCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; }*)rangeReferenceAtIndex:(unsigned long long)arg1;
- (void)removeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)start;

@end

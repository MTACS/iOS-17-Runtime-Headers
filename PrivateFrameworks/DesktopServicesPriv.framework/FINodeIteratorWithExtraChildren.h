
@interface FINodeIteratorWithExtraChildren : FINodeIterator {
    FINodeIterator * _baseIterator;
    bool  _baseIteratorDone;
    FINodeIterator * _extraIterator;
}

@property (nonatomic, retain) FINodeIterator *baseIterator;
@property (nonatomic) bool baseIteratorDone;
@property (nonatomic, retain) FINodeIterator *extraIterator;

- (void).cxx_destruct;
- (id)baseIterator;
- (bool)baseIteratorDone;
- (unsigned long long)estimatedSize;
- (id)extraIterator;
- (id)first;
- (bool)fullyPopulated;
- (id)initWithContainer:(id)arg1 extraChildren:(id)arg2 synchronous:(bool)arg3 includingInvisibleItems:(bool)arg4;
- (id)next;
- (void)setBaseIterator:(id)arg1;
- (void)setBaseIteratorDone:(bool)arg1;
- (void)setExtraIterator:(id)arg1;

@end


@interface FIChildrenIterator : FINodeIterator {
    NSArray * _children;
    bool  _includeInvisible;
    unsigned long long  _index;
}

@property (nonatomic, copy) NSArray *children;
@property (nonatomic, readonly) bool includeInvisible;
@property (nonatomic) unsigned long long index;

- (void).cxx_destruct;
- (id)children;
- (unsigned long long)estimatedSize;
- (id)first;
- (bool)fullyPopulated;
- (bool)includeInvisible;
- (unsigned long long)index;
- (id)initWithChildren:(id)arg1 includingInvisibleItems:(bool)arg2;
- (id)next;
- (id)rawNext;
- (void)setChildren:(id)arg1;
- (void)setIndex:(unsigned long long)arg1;

@end

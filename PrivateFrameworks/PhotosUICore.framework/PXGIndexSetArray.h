
@interface PXGIndexSetArray : NSObject {
    long long  _capacity;
    long long  _count;
    void ** _indexSetReferences;
}

@property (nonatomic) long long count;
@property (nonatomic, readonly) void**indexSetReferences;

- (long long)count;
- (void)dealloc;
- (id)description;
- (void**)indexSetReferences;
- (void)removeAllIndexes;
- (void)setCount:(long long)arg1;

@end

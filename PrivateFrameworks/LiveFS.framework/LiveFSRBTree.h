
@interface LiveFSRBTree : NSObject {
    NSMutableArray * _ourData;
    struct { int (*x1)(); int (*x2)(); unsigned long long x3; void *x4; } * btOps;
    struct rb_tree { void *x1[8]; } * btree;
    id /* block */  ourComparitor;
}

@property (retain) NSMutableArray *ourData;

+ (id)newWithComparitor:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)addDataBuffer:(id)arg1;
- (void)addEntry:(long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)extractItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBlock:(id /* block */)arg2;
- (id)initWithComparitor:(id /* block */)arg1;
- (id)ourData;
- (void)setOurData:(id)arg1;

@end


@interface _CSMultiQueryCountResult : _CSMultiQueryResult {
    unsigned long long  _count;
}

@property (nonatomic) unsigned long long count;

- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;

@end

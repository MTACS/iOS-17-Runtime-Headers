
@interface CKXStructArrayMutableProxy : CKXArrayProxyBase {
    long long  _index;
}

@property (nonatomic) long long index;

- (void)appendWithProxyBlock:(id /* block */)arg1;
- (long long)count;
- (long long)index;
- (bool)isMutable;
- (void)reset;
- (void)setIndex:(long long)arg1;

@end

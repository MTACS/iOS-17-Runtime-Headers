
@interface AVEventManagerBlockAction : AVEventManagerAction {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)arg1 event:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)sendAction:(id)arg1;

@end


@interface FPSetLastOpenDateOperation : FPTransformOperation {
    NSDate * _date;
    NSArray * _items;
}

- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1 date:(id)arg2;
- (id)replicateForItems:(id)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;

@end

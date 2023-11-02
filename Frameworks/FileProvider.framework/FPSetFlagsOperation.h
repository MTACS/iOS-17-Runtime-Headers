
@interface FPSetFlagsOperation : FPTransformOperation {
    unsigned long long  _flags;
}

- (id)fp_prettyDescription;
- (id)initWithItems:(id)arg1 flags:(unsigned long long)arg2;
- (id)replicateForItems:(id)arg1;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;

@end

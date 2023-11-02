
@interface GDInteractionEnumeration : NSObject <NSFastEnumeration> {
    NSArray * _batch;
    unsigned long long  _batchSize;
    NSPredicate * _predicate;
    NSSortDescriptor * _sortDescriptor;
    _CDInteractionStore * _store;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithStore:(id)arg1 batchSize:(unsigned long long)arg2;
- (id)initWithStore:(id)arg1 predicate:(id)arg2 sortDescriptor:(id)arg3 batchSize:(unsigned long long)arg4;

@end

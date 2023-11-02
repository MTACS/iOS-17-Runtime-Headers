
@interface CPLUnionEnumerator : NSObject <NSFastEnumeration> {
    <NSFastEnumeration> * _currentEnumerator;
    void * _currentEnumeratorMutationsPtr;
    unsigned long long  _currentGeneratorIndex;
    id /* block */  _generatorArray;
    NSMutableArray * _remainingGenerators;
}

- (void).cxx_destruct;
- (void)_prepareNextEnumeratorWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)initWithEnumeratorGenerators:(id)arg1;
- (id)initWithEnumerators:(id)arg1;

@end

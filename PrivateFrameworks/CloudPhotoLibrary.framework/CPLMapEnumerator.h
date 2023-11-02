
@interface CPLMapEnumerator : NSObject <NSFastEnumeration> {
    <NSFastEnumeration> * _enumerator;
    id * _itemsPtr;
    id /* block */  _mapBlock;
    unsigned long long  _previousItemsPtrLength;
    unsigned long long  _previousResultValuesCount;
    unsigned long long  _previousResultValuesLength;
    id * _resultValues;
}

@property (nonatomic, readonly) id /* block */ mapBlock;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithEnumerator:(id)arg1;
- (id)initWithEnumerator:(id)arg1 map:(id /* block */)arg2;
- (id /* block */)mapBlock;

@end


@interface SGList : NSObject {
    NSMutableArray * _array;
    id /* block */  _comparator;
    <SGListDelegate> * _delegate;
}

@property (nonatomic, retain) NSMutableArray *array;
@property (nonatomic, copy) id /* block */ comparator;
@property (nonatomic) <SGListDelegate> *delegate;

- (void).cxx_destruct;
- (bool)addItem:(id)arg1;
- (id)array;
- (id /* block */)comparator;
- (unsigned long long)count;
- (id)delegate;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)init;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)items;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeAllItems;
- (bool)removeItem:(id)arg1;
- (void)setArray:(id)arg1;
- (void)setComparator:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;

@end

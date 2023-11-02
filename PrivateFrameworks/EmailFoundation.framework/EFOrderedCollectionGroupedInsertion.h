
@interface EFOrderedCollectionGroupedInsertion : NSObject {
    unsigned long long  _index;
    NSArray * _objects;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly, copy) NSArray *objects;

- (void).cxx_destruct;
- (unsigned long long)index;
- (id)initWithObjects:(id)arg1 index:(unsigned long long)arg2;
- (id)objects;

@end

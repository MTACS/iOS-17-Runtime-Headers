
@interface _REDiffItem : NSObject {
    id /* block */  _comparator;
    id /* block */  _hashGenerator;
    unsigned long long  _index;
    id  _object;
}

@property (nonatomic, readonly) id /* block */ comparator;
@property (nonatomic, readonly) id /* block */ hashGenerator;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) id object;

+ (id)itemWithObject:(id)arg1 index:(unsigned long long)arg2 comparator:(id /* block */)arg3 hashGenerator:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)comparator;
- (unsigned long long)hash;
- (id /* block */)hashGenerator;
- (unsigned long long)index;
- (bool)isEqual:(id)arg1;
- (id)object;

@end

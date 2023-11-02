
@interface _EFMutableIndexMapTuple : NSObject {
    unsigned long long  _index;
    long long  _key;
    id  _object;
}

@property (nonatomic) unsigned long long index;
@property (nonatomic) long long key;
@property (nonatomic, retain) id object;

- (void).cxx_destruct;
- (unsigned long long)index;
- (long long)key;
- (id)object;
- (void)setIndex:(unsigned long long)arg1;
- (void)setKey:(long long)arg1;
- (void)setObject:(id)arg1;

@end

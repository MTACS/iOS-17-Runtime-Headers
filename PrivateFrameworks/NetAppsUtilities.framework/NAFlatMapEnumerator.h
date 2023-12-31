
@interface NAFlatMapEnumerator : NSEnumerator {
    NSEnumerator * _enumerator;
    id /* block */  _map;
}

@property (nonatomic, readonly) NSEnumerator *enumerator;
@property (nonatomic, readonly, copy) id /* block */ map;

- (void).cxx_destruct;
- (id)allObjects;
- (id)enumerator;
- (id)initWithEnumerator:(id)arg1 map:(id /* block */)arg2;
- (id /* block */)map;
- (id)nextObject;

@end

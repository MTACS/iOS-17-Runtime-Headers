
@interface NAFilterEnumerator : NSEnumerator {
    NSEnumerator * _enumerator;
    id /* block */  _filter;
}

@property (nonatomic, readonly) NSEnumerator *enumerator;
@property (nonatomic, readonly, copy) id /* block */ filter;

- (void).cxx_destruct;
- (id)allObjects;
- (id)enumerator;
- (id /* block */)filter;
- (id)initWithEnumerator:(id)arg1 filter:(id /* block */)arg2;
- (id)nextObject;

@end

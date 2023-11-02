
@interface NSFilterObservationTransformer : NSObservationTransformer {
    id  _predicate;
}

+ (id)filterWithBlock:(id /* block */)arg1;

- (void)_receiveBox:(id)arg1;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;

@end

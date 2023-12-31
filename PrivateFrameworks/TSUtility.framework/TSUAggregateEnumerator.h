
@interface TSUAggregateEnumerator : NSEnumerator {
    NSMutableArray * _objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)arg1;

- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFirstObject:(id)arg1 argumentList:(char *)arg2;
- (id)initWithObjects:(id)arg1;
- (id)nextObject;

@end

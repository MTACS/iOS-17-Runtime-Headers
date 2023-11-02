
@interface _CNLazyArrayOperatorDistinct : _CNLazyArrayOperator {
    NSMutableSet * _seenValues;
}

- (void).cxx_destruct;
- (id)initWithInput:(id)arg1;
- (id)nextObject;

@end

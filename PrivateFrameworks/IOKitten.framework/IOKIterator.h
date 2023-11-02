
@interface IOKIterator : IOKObject {
    id /* block */  _enumerationBlock;
}

@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)enumerate;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (id)initWithIOObject:(unsigned int)arg1;
- (id)initWithIterator:(unsigned int)arg1;
- (id)initWithIterator:(unsigned int)arg1 enumerationBlock:(id /* block */)arg2;
- (bool)isValid;
- (id)nextObject;
- (void)reset;

@end

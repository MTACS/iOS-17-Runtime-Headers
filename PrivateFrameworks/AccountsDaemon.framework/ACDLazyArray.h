
@interface ACDLazyArray : NSArray {
    id /* block */  _initializationBlock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _initializationLock;
    NSArray * _underlyingArray;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInitializer:(id /* block */)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end

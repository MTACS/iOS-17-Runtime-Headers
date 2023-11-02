
@interface ICQAsyncValueLoader : NSObject {
    id /* block */  _didUpdate;
    id /* block */  _fetchValue;
    id  _value;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _valueLock;
}

@property (nonatomic, copy) id /* block */ didUpdate;
@property (nonatomic, copy) id /* block */ fetchValue;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id /* block */)didUpdate;
- (id /* block */)fetchValue;
- (void)fetchValueAsynchronously;
- (id)initWithDefaultValue:(id)arg1 valueFetcher:(id /* block */)arg2;
- (void)setDidUpdate:(id /* block */)arg1;
- (void)setFetchValue:(id /* block */)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end

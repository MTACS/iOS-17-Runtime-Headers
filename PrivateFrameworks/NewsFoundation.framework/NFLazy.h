
@interface NFLazy : NSObject {
    id /* block */  _constructor;
    NFUnfairLock * _lock;
    id  _value;
}

@property (nonatomic, readonly, copy) id /* block */ constructor;
@property (nonatomic, readonly, copy) NFUnfairLock *lock;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id /* block */)constructor;
- (id)initWithConstructor:(id /* block */)arg1;
- (id)lock;
- (void)reset;
- (id)value;

@end


@interface _PASKVOHandlerTask : NSObject {
    id /* block */  _afterBlock;
    id /* block */  _beforeAndAfterBlock;
    NSString * _keyPath;
    NSObject * _object;
}

@property (nonatomic, copy) id /* block */ afterBlock;
@property (nonatomic, copy) id /* block */ beforeAndAfterBlock;
@property (nonatomic, copy) NSString *keyPath;
@property (nonatomic) NSObject *object;

- (void).cxx_destruct;
- (id /* block */)afterBlock;
- (id /* block */)beforeAndAfterBlock;
- (id)keyPath;
- (id)object;
- (void)setAfterBlock:(id /* block */)arg1;
- (void)setBeforeAndAfterBlock:(id /* block */)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setObject:(id)arg1;

@end

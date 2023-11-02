
@interface MGClientServiceQueryData : NSObject {
    id /* block */  _handler;
    NSPredicate * _predicate;
}

@property (nonatomic, readonly) id /* block */ handler;
@property (nonatomic, readonly) NSPredicate *predicate;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)initWithPredicate:(id)arg1 updateHandler:(id /* block */)arg2;
- (id)predicate;

@end

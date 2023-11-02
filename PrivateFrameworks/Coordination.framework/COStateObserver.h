
@interface COStateObserver : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _lastChanges;
    NSPredicate * _predicate;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) NSMutableDictionary *lastChanges;
@property (nonatomic, readonly, retain) NSPredicate *predicate;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)description;
- (id)dispatchQueue;
- (id)initWithDispatchQueue:(id)arg1 predicate:(id)arg2 block:(id /* block */)arg3;
- (id)lastChanges;
- (void)notify:(id)arg1;
- (id)predicate;

@end


@interface MGGroupQuery : NSObject {
    NSPredicate * _predicate;
    NSUUID * _query;
    MGClientService * _service;
    id /* block */  _updateHandler;
}

@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, retain) NSUUID *query;
@property (nonatomic, readonly) MGClientService *service;
@property (nonatomic, readonly, copy) id /* block */ updateHandler;

+ (id)queryWithPredicate:(id)arg1 updateHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithConnectionProvider:(id)arg1 predicate:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)initWithPredicate:(id)arg1 updateHandler:(id /* block */)arg2;
- (id)predicate;
- (id)query;
- (id)service;
- (void)setQuery:(id)arg1;
- (id /* block */)updateHandler;

@end

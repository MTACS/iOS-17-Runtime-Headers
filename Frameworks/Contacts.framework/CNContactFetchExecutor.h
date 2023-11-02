
@interface CNContactFetchExecutor : NSObject {
    CNContactFetchRequest * _request;
    CNContactStore * _store;
}

@property (nonatomic, readonly, copy) CNContactFetchRequest *request;
@property (nonatomic, readonly) CNContactStore *store;

+ (id)os_log;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRequest:(id)arg1 store:(id)arg2;
- (id)request;
- (id)run:(id*)arg1;
- (id)store;

@end

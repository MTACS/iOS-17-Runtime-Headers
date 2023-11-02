
@interface MGServiceClient : NSObject {
    NSXPCConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _queries;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly, retain) NSXPCConnection *connection;
@property (nonatomic, copy) NSDictionary *queries;
@property (nonatomic, retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (void)addQuery:(id)arg1;
- (id)connection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateQueriesUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithConnection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)outstandingQueryForIdentifier:(id)arg1;
- (id)queries;
- (void)removeQuery:(id)arg1;
- (void)setQueries:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end

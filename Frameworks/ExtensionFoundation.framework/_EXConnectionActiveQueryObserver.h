
@interface _EXConnectionActiveQueryObserver : NSObject <_EXActiveQueryObserver> {
    NSXPCConnection * _connection;
    NSObject<OS_os_transaction> * _transaction;
}

@property (retain) NSXPCConnection *connection;
@property (retain) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (id)connection;
- (id)description;
- (unsigned long long)hash;
- (id)initWitConnection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)query:(id)arg1 resultDidUpdate:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setTransaction:(id)arg1;
- (id)transaction;

@end

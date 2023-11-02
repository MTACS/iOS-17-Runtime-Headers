
@interface COClientObserver : COCoordinationServiceClient {
    id  _cluster;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) id cluster;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *transaction;

- (void).cxx_destruct;
- (id)cluster;
- (id)initWithConnection:(id)arg1;
- (id)initWithConnection:(id)arg1 domain:(id)arg2 cluster:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)transaction;

@end

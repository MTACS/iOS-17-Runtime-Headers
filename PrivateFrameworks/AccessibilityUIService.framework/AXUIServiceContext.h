
@interface AXUIServiceContext : NSObject {
    NSMutableArray * _clientMessengers;
    <AXUIService> * _service;
    <NSObject><NSCopying> * _serviceIdentifier;
}

@property (nonatomic, retain) NSMutableArray *clientMessengers;
@property (nonatomic, readonly) unsigned long long clientsCount;
@property (nonatomic, retain) <AXUIService> *service;
@property (nonatomic, copy) <NSObject><NSCopying> *serviceIdentifier;

- (void).cxx_destruct;
- (unsigned long long)_indexOfClientWithIdentifier:(id)arg1;
- (void)addClientWithIdentifier:(id)arg1 connection:(id)arg2;
- (id)clientMessengerWithIdentifier:(id)arg1;
- (id)clientMessengers;
- (unsigned long long)clientsCount;
- (void)enumerateClientsUsingBlock:(id /* block */)arg1;
- (bool)hasClientWithIdentifier:(id)arg1;
- (id)initWithService:(id)arg1 serviceIdentifier:(id)arg2;
- (void)removeClientWithIdentifier:(id)arg1;
- (id)service;
- (id)serviceIdentifier;
- (void)setClientMessengers:(id)arg1;
- (void)setService:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;

@end

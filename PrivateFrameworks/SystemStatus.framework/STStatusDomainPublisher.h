
@interface STStatusDomainPublisher : NSObject <STStatusDomainPublisherClientHandle> {
    bool  _invalidated;
    <STStatusDomainPublisherServerHandle> * _serverHandle;
}

@property (nonatomic, copy) <STStatusDomainData> *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (readonly) Class superclass;
@property (nonatomic, copy) <STStatusDomainData> *volatileData;

+ (id)emptyChangeContext;
+ (id)emptyData;
+ (unsigned long long)statusDomainName;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)init;
- (id)initWithServerHandle:(id)arg1;
- (void)invalidate;
- (bool)isInvalidated;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 completion:(id /* block */)arg2;
- (void)setData:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)setVolatileData:(id)arg1;
- (void)setVolatileData:(id)arg1 completion:(id /* block */)arg2;
- (void)setVolatileData:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)updateData:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateDataWithBlock:(id /* block */)arg1;
- (void)updateDataWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateVolatileData:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateVolatileDataWithBlock:(id /* block */)arg1;
- (void)updateVolatileDataWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)volatileData;

@end

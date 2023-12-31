
@interface IDSCloudKitKeyValueStore : NSObject {
    IDSCKContainer * _container;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) IDSCKContainer *container;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)container;
- (void)fetchDataForKey:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchObjectForKey:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContainer:(id)arg1 queue:(id)arg2;
- (id)queue;
- (void)setContainer:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setObject:(id)arg1 forKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setQueue:(id)arg1;

@end

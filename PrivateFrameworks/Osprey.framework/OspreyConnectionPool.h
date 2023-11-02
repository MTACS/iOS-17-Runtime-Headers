
@interface OspreyConnectionPool : NSObject {
    NSMapTable * _connectionMap;
    NSObject<OS_dispatch_queue> * _poolQueue;
}

- (void).cxx_destruct;
- (id)connectionForConfiguration:(id)arg1;
- (id)init;

@end

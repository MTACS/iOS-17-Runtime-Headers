
@interface IOKNotificationPort : NSObject {
    struct IONotificationPort { } * _port;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) unsigned int machPort;
@property (nonatomic, readonly) struct IONotificationPort { }*port;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initOnDispatchQueue:(id)arg1;
- (id)initWithMasterPort:(unsigned int)arg1 onDispatchQueue:(id)arg2;
- (unsigned int)machPort;
- (struct IONotificationPort { }*)port;
- (id)queue;

@end

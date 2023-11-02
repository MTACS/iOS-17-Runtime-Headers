
@interface _UIKeyboardMediaServiceWarmUpConnection : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedConnection;
+ (void)warmUp;

- (void).cxx_destruct;
- (void)warmUp;

@end

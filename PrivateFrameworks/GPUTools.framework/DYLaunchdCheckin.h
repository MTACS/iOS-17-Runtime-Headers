
@interface DYLaunchdCheckin : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_source> * _connSource;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _socketPath;
}

- (void).cxx_destruct;
- (id)_connectToSocketDescriptor:(int)arg1;
- (int)_tcpListenSocketDescriptor;
- (int)_unixListenSocketDescriptor;
- (void)checkinWithBlock:(id /* block */)arg1;
- (id)initWithSocketPath:(id)arg1;

@end

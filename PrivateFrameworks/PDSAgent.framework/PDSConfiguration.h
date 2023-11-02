
@interface PDSConfiguration : NSObject <NSCopying> {
    NSURL * _daemonRootDirectory;
    NSString * _pushHandlerPort;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_workloop> * _workloop;
}

@property (nonatomic, retain) NSURL *daemonRootDirectory;
@property (nonatomic, retain) NSString *pushHandlerPort;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_workloop> *workloop;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daemonRootDirectory;
- (id)description;
- (id)pushHandlerPort;
- (id)queue;
- (void)setDaemonRootDirectory:(id)arg1;
- (void)setPushHandlerPort:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setWorkloop:(id)arg1;
- (id)workloop;

@end

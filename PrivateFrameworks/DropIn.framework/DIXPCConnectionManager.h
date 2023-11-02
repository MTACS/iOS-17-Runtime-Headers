
@interface DIXPCConnectionManager : NSObject {
    DIXPCDispatcher * _dispatcher;
    DIXPCManager * _manager;
}

@property (nonatomic, readonly) DIXPCDispatcher *dispatcher;
@property (nonatomic, retain) DIXPCManager *manager;

- (void).cxx_destruct;
- (id)dispatcher;
- (id)initWithXPCManager:(id)arg1 dispatcher:(id)arg2;
- (id)manager;
- (void)setManager:(id)arg1;

@end

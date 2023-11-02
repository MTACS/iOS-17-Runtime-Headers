
@interface CMLPIRClient : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _useCase;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) NSString *useCase;

+ (id)new;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (id)initWithUseCase:(id)arg1;
- (id)initWithUseCase:(id)arg1 dispatchQueue:(id)arg2;
- (id)initWithUseCase:(id)arg1 dispatchQueue:(id)arg2 connection:(id)arg3;
- (void)setConnection:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (bool)setPIRConfig:(id)arg1 error:(id*)arg2;
- (id)useCase;

@end

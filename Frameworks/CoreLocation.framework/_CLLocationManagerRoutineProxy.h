
@interface _CLLocationManagerRoutineProxy : NSObject <CLLocationManagerRoutineClientInterface> {
    NSXPCConnection * _connection;
    id  _delegate;
    id  _inertialDelegate;
    CLLocationManagerRoutine * _locationManagerRoutine;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _updating;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id inertialDelegate;
@property (nonatomic) CLLocationManagerRoutine *locationManagerRoutine;
@property (readonly) Class superclass;
@property (nonatomic) bool updating;

- (id)connection;
- (void)createConnection;
- (void)dealloc;
- (id)delegate;
- (void)didUpdateInertialData:(id)arg1;
- (void)didUpdateLocations:(id)arg1;
- (void)didUpdateLocations:(id)arg1 withReply:(id /* block */)arg2;
- (id)inertialDelegate;
- (id)initWithQueue:(id)arg1 locationManagerRoutine:(id)arg2;
- (id)locationManagerRoutine;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInertialDelegate:(id)arg1;
- (void)setLocationManagerRoutine:(id)arg1;
- (void)setUpdating:(bool)arg1;
- (bool)updating;

@end

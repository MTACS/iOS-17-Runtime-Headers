
@interface CRSSessionController : NSObject <CRSSessionServerToClientInterface> {
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    RBSProcessHandle * _process;
}

@property (nonatomic, retain) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) RBSProcessHandle *process;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (void)invalidate;
- (id)process;
- (void)setConnection:(id)arg1;
- (void)setProcess:(id)arg1;

@end

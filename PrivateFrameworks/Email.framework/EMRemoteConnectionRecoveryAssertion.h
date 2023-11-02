
@interface EMRemoteConnectionRecoveryAssertion : NSObject {
    <EMRemoteConnectionRecoveryAssertionDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic) <EMRemoteConnectionRecoveryAssertionDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (void)setDelegate:(id)arg1;

@end

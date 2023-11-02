
@interface CRSInCallAssertion : NSObject <BSInvalidatable, CRSInCallServerToClientInterface> {
    BSServiceConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_activated;
    bool  _lock_allowsBanners;
    bool  _lock_invalidated;
    bool  _lock_pendingPresent;
    bool  _lock_presented;
    NSString * _reason;
}

@property (nonatomic) bool allowsBanners;
@property (nonatomic, retain) BSServiceConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleConnectionActivated;
- (void)_handleConnectionInterrupted;
- (void)activate;
- (bool)allowsBanners;
- (id)connection;
- (id)initWithReason:(id)arg1;
- (void)invalidate;
- (id)reason;
- (void)setAllowsBanners:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setReason:(id)arg1;

@end

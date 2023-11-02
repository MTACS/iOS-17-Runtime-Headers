
@interface CRSUIStatusBarStyleAssertion : NSObject <BSInvalidatable, CRSUIStatusBarStyleServerToClientInterface> {
    BSServiceConnection * _connection;
    long long  _contrast;
    NSUUID * _identifier;
    long long  _interfaceStyle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_acquired;
    bool  _lock_connectionActivated;
    bool  _lock_invalidated;
    bool  _lock_pendingAcquire;
    BSAnimationSettings * _lock_pendingAcquireAnimationSettings;
    BKSAnimationFenceHandle * _lock_pendingAcquireFence;
    bool  _siriPresentation;
}

@property (nonatomic, retain) BSServiceConnection *connection;
@property (nonatomic) long long contrast;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) long long interfaceStyle;
@property (nonatomic) bool siriPresentation;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (void)_handleConnectionActivated;
- (void)acquireWithAnimationSettings:(id)arg1;
- (id)connection;
- (long long)contrast;
- (id)identifier;
- (id)initForSiriPresentation;
- (id)initWithInterfaceStyle:(long long)arg1 contrast:(long long)arg2;
- (id)initWithInterfaceStyle:(long long)arg1 contrast:(long long)arg2 siriPresentation:(bool)arg3;
- (long long)interfaceStyle;
- (void)invalidate;
- (bool)isValid;
- (void)reliquishWithAnimationSettings:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setContrast:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterfaceStyle:(long long)arg1;
- (void)setSiriPresentation:(bool)arg1;
- (bool)siriPresentation;

@end

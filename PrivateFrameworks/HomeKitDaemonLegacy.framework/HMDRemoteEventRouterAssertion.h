
@interface HMDRemoteEventRouterAssertion : HMFObject <HMFCancellable> {
    <HMDRemoteEventRouterClientActiveStateDelegate> * _activeStateDelegate;
    bool  _isActive;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic) <HMDRemoteEventRouterClientActiveStateDelegate> *activeStateDelegate;
@property (nonatomic) bool isActive;

- (void).cxx_destruct;
- (id)activeStateDelegate;
- (void)cancel;
- (void)dealloc;
- (id)initWithAssertionController:(id)arg1;
- (bool)isActive;
- (void)setActiveStateDelegate:(id)arg1;
- (void)setIsActive:(bool)arg1;

@end

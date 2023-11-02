
@interface RPAppSignInService : NSObject {
    bool  _activateCalled;
    NSString * _appBundleID;
    NSString * _appName;
    NSArray * _associatedDomains;
    SFService * _bleAdvertiser;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    bool  _invalidateCalled;
    bool  _invalidateDone;
}

@property (nonatomic, copy) NSString *appBundleID;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSArray *associatedDomains;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;

- (void).cxx_destruct;
- (void)_activate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activate;
- (id)appBundleID;
- (id)appName;
- (id)associatedDomains;
- (id)description;
- (id)dispatchQueue;
- (unsigned int)flags;
- (id)init;
- (void)invalidate;
- (void)setAppBundleID:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAssociatedDomains:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;

@end

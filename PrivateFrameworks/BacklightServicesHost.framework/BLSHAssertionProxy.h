
@interface BLSHAssertionProxy : NSObject <BLSAssertionServiceResponding, BSInvalidatable> {
    bool  _acquired;
    BLSAssertionDescriptor * _descriptor;
    BLSAssertionIdentifier * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BLSXPCAssertionServiceClientInterface> * _remoteTarget;
    bool  _valid;
}

@property (getter=isAcquired, nonatomic, readonly) bool acquired;
@property (nonatomic, readonly) unsigned long long acquisitionState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BLSAssertionDescriptor *descriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BLSAssertionIdentifier *identifier;
@property (nonatomic, readonly) <BLSXPCAssertionServiceClientInterface> *remoteTarget;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)acquisitionState;
- (id)description;
- (id)descriptor;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 descriptor:(id)arg2 remoteTarget:(id)arg3;
- (void)invalidate;
- (bool)isAcquired;
- (id)remoteTarget;
- (oneway void)serviceDidAcquire;
- (oneway void)serviceDidCancelWithError:(id)arg1;
- (oneway void)serviceDidPause;
- (oneway void)serviceDidResume;
- (oneway void)serviceFailedToAcquireWithError:(id)arg1;
- (oneway void)serviceWillCancel;
- (void)setIdentifier:(id)arg1;

@end

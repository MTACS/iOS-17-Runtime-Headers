
@interface _DKSyncType : NSObject <NSSecureCoding> {
    bool  _didActivatePeer;
    bool  _didAddSyncedEvents;
    bool  _didDeleteSyncedEvents;
    bool  _didReceivePush;
    bool  _forceSync;
    bool  _isInitialSync;
    bool  _isPeriodicSync;
    bool  _isSingleDevice;
    bool  _isTriggeredSync;
    double  _periodicSyncInterval;
    unsigned long long  _urgency;
    NSObject<OS_xpc_object> * _xpcActivity;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

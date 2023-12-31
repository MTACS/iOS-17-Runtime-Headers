
@interface BLTPairedSyncState : NSObject {
    bool  _initialSyncComplete;
    unsigned long long  _state;
}

@property (getter=isInitialSyncComplete, nonatomic, readonly) bool initialSyncComplete;
@property (nonatomic) unsigned long long state;
@property (getter=isSyncRestricted, nonatomic, readonly) bool syncRestricted;
@property (getter=isTrafficRestricted, nonatomic, readonly) bool trafficRestricted;

+ (id)sharedInstance;

- (bool)becameSyncUnrestricted:(id)arg1;
- (bool)becameTrafficUnrestricted:(id)arg1;
- (bool)isInitialSyncComplete;
- (bool)isSyncRestricted;
- (bool)isTrafficRestricted;
- (void)leaveState:(unsigned long long)arg1;
- (void)setInitialSyncComplete:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end

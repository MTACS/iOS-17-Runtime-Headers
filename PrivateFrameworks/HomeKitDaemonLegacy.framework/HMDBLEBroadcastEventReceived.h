
@interface HMDBLEBroadcastEventReceived : HMMLogEvent {
    HMDAccessory * _accessory;
    bool  _hasExpectedGSN;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) bool hasExpectedGSN;

+ (id)broadcastEventFromAccessory:(id)arg1 withExpectedGSN:(bool)arg2;

- (void).cxx_destruct;
- (id)accessory;
- (bool)hasExpectedGSN;
- (id)initBroadcastEventFromAccessory:(id)arg1 withExpectedGSN:(bool)arg2;

@end

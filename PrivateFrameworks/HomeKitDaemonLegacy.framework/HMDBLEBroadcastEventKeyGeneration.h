
@interface HMDBLEBroadcastEventKeyGeneration : HMMLogEvent {
    HMDAccessory * _accessory;
    int  _reason;
}

@property (nonatomic, readonly) HMDAccessory *accessory;
@property (nonatomic, readonly) int reason;

+ (id)broadcastKeyGenerationEventForAccessory:(id)arg1 reason:(int)arg2;

- (void).cxx_destruct;
- (id)accessory;
- (id)initBroadcastKeyGenerationEventForAccessory:(id)arg1 reason:(int)arg2;
- (int)reason;

@end

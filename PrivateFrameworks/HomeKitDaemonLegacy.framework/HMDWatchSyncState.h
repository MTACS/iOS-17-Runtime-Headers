
@interface HMDWatchSyncState : HMFObject {
    NSString * _deviceId;
    HMDPairedSync * _pairedSync;
    NSMutableArray * _syncs;
}

@property (nonatomic, readonly) HMDWatchSync *currentSync;
@property (nonatomic, readonly, copy) NSString *deviceId;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) HMDPairedSync *pairedSync;

+ (bool)isNewBetter:(unsigned long long)arg1 present:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)addNewSync:(id)arg1;
- (id)currentSync;
- (void)dealloc;
- (id)description;
- (id)deviceId;
- (id)identifier;
- (id)initWithDeviceId:(id)arg1 pairedSync:(id)arg2;
- (id)pairedSync;
- (bool)removeSync;

@end
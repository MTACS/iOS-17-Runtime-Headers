
@interface AMSMetricsIdentifierStoreInfo : NSObject {
    NSString * _account;
    bool  _crossDeviceSync;
    bool  _deleted;
    NSDate * _lastSync;
    NSDate * _modified;
    double  _resetInterval;
    NSDate * _started;
    NSString * _storeKey;
    NSString * _storeUUID;
}

@property (nonatomic, retain) NSString *account;
@property (nonatomic) bool crossDeviceSync;
@property (nonatomic) bool deleted;
@property (nonatomic, retain) NSDate *lastSync;
@property (nonatomic, retain) NSDate *modified;
@property (nonatomic) double resetInterval;
@property (nonatomic, retain) NSDate *started;
@property (nonatomic, retain) NSString *storeKey;
@property (nonatomic, retain) NSString *storeUUID;

- (void).cxx_destruct;
- (id)account;
- (bool)crossDeviceSync;
- (bool)deleted;
- (id)lastSync;
- (id)modified;
- (double)resetInterval;
- (void)setAccount:(id)arg1;
- (void)setCrossDeviceSync:(bool)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setLastSync:(id)arg1;
- (void)setModified:(id)arg1;
- (void)setResetInterval:(double)arg1;
- (void)setStarted:(id)arg1;
- (void)setStoreKey:(id)arg1;
- (void)setStoreUUID:(id)arg1;
- (id)started;
- (id)storeKey;
- (id)storeUUID;

@end


@interface MAAutoAssetInfoDesire : NSObject <NSSecureCoding> {
    long long  _checkWaitTimeoutSecs;
    MAAutoAssetPolicy * _clientAssetPolicy;
    NSString * _desireReason;
    bool  _downloadProgressDesired;
    long long  _lockWaitTimeoutSecs;
    NSString * _updateCategoryDesiredByClient;
}

@property (nonatomic, readonly) long long checkWaitTimeoutSecs;
@property (nonatomic, readonly, retain) MAAutoAssetPolicy *clientAssetPolicy;
@property (nonatomic, readonly, retain) NSString *desireReason;
@property (nonatomic, readonly) bool downloadProgressDesired;
@property (nonatomic, readonly) long long lockWaitTimeoutSecs;
@property (nonatomic, readonly, retain) NSString *updateCategoryDesiredByClient;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)checkWaitTimeoutSecs;
- (id)clientAssetPolicy;
- (id)description;
- (id)desireReason;
- (bool)downloadProgressDesired;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDesiredCategory:(id)arg1 forClientAssetPolicy:(id)arg2 reasonDesired:(id)arg3 withCheckWaitTimeout:(long long)arg4 withLockWaitTimeout:(long long)arg5 desiringProgress:(bool)arg6;
- (long long)lockWaitTimeoutSecs;
- (id)summary;
- (id)updateCategoryDesiredByClient;

@end

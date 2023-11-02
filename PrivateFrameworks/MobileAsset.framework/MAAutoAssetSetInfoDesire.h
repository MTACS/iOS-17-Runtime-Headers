
@interface MAAutoAssetSetInfoDesire : NSObject <NSSecureCoding> {
    bool  _awaitDownloadingOfDiscovered;
    long long  _checkWaitTimeoutSecs;
    MAAutoAssetSetPolicy * _clientAssetSetPolicy;
    NSString * _desireReason;
    bool  _downloadProgressDesired;
    long long  _lockWaitTimeoutSecs;
}

@property (nonatomic, readonly) bool awaitDownloadingOfDiscovered;
@property (nonatomic, readonly) long long checkWaitTimeoutSecs;
@property (nonatomic, readonly, retain) MAAutoAssetSetPolicy *clientAssetSetPolicy;
@property (nonatomic, readonly, retain) NSString *desireReason;
@property (nonatomic, readonly) bool downloadProgressDesired;
@property (nonatomic, readonly) long long lockWaitTimeoutSecs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)awaitDownloadingOfDiscovered;
- (long long)checkWaitTimeoutSecs;
- (id)clientAssetSetPolicy;
- (id)description;
- (id)desireReason;
- (bool)downloadProgressDesired;
- (void)encodeWithCoder:(id)arg1;
- (id)initForClientAssetSetPolicy:(id)arg1 reasonDesired:(id)arg2 awaitingDownloadOfDiscovered:(bool)arg3 withCheckWaitTimeout:(long long)arg4 withLockWaitTimeout:(long long)arg5 desiringProgress:(bool)arg6;
- (id)initWithCoder:(id)arg1;
- (long long)lockWaitTimeoutSecs;
- (id)summary;

@end

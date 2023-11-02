
@interface PLComputeCachePolicy : NSObject {
    long long  _allowPolicy;
    PLComputeCachePolicyConfiguration * _configuration;
    <PLComputeCachePolicyDataSource> * _data;
    long long  _denyPolicy;
    NSString * _reason;
}

@property (nonatomic, readonly) long long allowPolicy;
@property (nonatomic, readonly) PLComputeCachePolicyConfiguration *configuration;
@property (nonatomic, readonly) long long denyPolicy;
@property (nonatomic, readonly) NSString *reason;

- (void).cxx_destruct;
- (void)_checkAllowPolicy;
- (void)_checkDenyPolicy;
- (long long)_deriveAllowPolicy;
- (long long)_deriveDenyPolicy;
- (bool)_isAssetCountWithinPolicy;
- (bool)_isLastSnapshotDateWithinPolicy;
- (bool)_isiCloudTierWithinPolicy;
- (long long)allowPolicy;
- (id)configuration;
- (long long)denyPolicy;
- (id)initWithPolicyData:(id)arg1 configuration:(id)arg2;
- (id)reason;
- (bool)snapshotAllowed;
- (bool)snapshotRequired;

@end

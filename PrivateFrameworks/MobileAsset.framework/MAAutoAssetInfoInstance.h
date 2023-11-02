
@interface MAAutoAssetInfoInstance : NSObject <NSSecureCoding> {
    NSString * _autoAssetClientName;
    MAAutoAssetSelector * _clientAssetSelector;
    long long  _clientProcessID;
    NSString * _clientProcessName;
    NSUUID * _frameworkInstanceUUID;
}

@property (nonatomic, readonly, retain) NSString *autoAssetClientName;
@property (nonatomic, readonly, retain) MAAutoAssetSelector *clientAssetSelector;
@property (nonatomic, readonly) long long clientProcessID;
@property (nonatomic, readonly, retain) NSString *clientProcessName;
@property (nonatomic, readonly, retain) NSUUID *frameworkInstanceUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)autoAssetClientName;
- (id)clientAssetSelector;
- (long long)clientProcessID;
- (id)clientProcessName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frameworkInstanceUUID;
- (id)initForClientName:(id)arg1 withProcessName:(id)arg2 withProcessID:(long long)arg3 usingAssetSelector:(id)arg4 associatingFrameworkUUID:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)summary;

@end

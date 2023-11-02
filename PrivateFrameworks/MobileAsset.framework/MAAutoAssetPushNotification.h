
@interface MAAutoAssetPushNotification : NSObject <NSSecureCoding> {
    NSDictionary * _additionalPushParameters;
    NSString * _assetSpecifier;
    NSString * _assetType;
    NSString * _assetVersion;
    MAAutoAssetUpdatePolicy * _autoUpdatePolicy;
    long long  _pushReason;
}

@property (nonatomic, retain) NSDictionary *additionalPushParameters;
@property (nonatomic, readonly, retain) NSString *assetSpecifier;
@property (nonatomic, readonly, retain) NSString *assetType;
@property (nonatomic, readonly, retain) NSString *assetVersion;
@property (nonatomic, readonly, retain) MAAutoAssetUpdatePolicy *autoUpdatePolicy;
@property (nonatomic, readonly, retain) NSDictionary *historyRepresentation;
@property (nonatomic) long long pushReason;

+ (id)pushReasonName:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalPushParameters;
- (id)assetSpecifier;
- (id)assetType;
- (id)assetVersion;
- (id)autoUpdatePolicy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)historyRepresentation;
- (id)initWithCoder:(id)arg1;
- (id)initWithPushReason:(long long)arg1;
- (id)initWithPushReason:(long long)arg1 forAssetType:(id)arg2 withAssetSpecifier:(id)arg3 matchingAssetVersion:(id)arg4;
- (id)initWithPushReason:(long long)arg1 forAssetType:(id)arg2 withAssetSpecifier:(id)arg3 matchingAssetVersion:(id)arg4 withUpdatePolicy:(id)arg5;
- (id)initWithPushReason:(long long)arg1 forAssetType:(id)arg2 withAssetSpecifier:(id)arg3 matchingAssetVersion:(id)arg4 withUpdatePolicy:(id)arg5 withAdditional:(id)arg6;
- (id)newAssetName;
- (id)newSummaryDictionary;
- (long long)pushReason;
- (id)pushReasonName;
- (void)setAdditionalPushParameters:(id)arg1;
- (void)setPushReason:(long long)arg1;
- (id)summary;

@end

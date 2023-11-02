
@interface MAAutoAssetInfoFound : NSObject <NSSecureCoding> {
    NSDictionary * _assetAttributes;
    MAAutoAssetStatus * _currentStatus;
    MAAutoAssetSelector * _fullAssetSelector;
    NSURL * _localContentURL;
}

@property (nonatomic, readonly, retain) NSDictionary *assetAttributes;
@property (nonatomic, readonly, retain) MAAutoAssetStatus *currentStatus;
@property (nonatomic, readonly, retain) MAAutoAssetSelector *fullAssetSelector;
@property (nonatomic, readonly, retain) NSURL *localContentURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetAttributes;
- (id)currentStatus;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullAssetSelector;
- (id)initForSelector:(id)arg1 withLocalContentURL:(id)arg2 withAssetAttributes:(id)arg3 reportingStatus:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)localContentURL;
- (id)summary;

@end

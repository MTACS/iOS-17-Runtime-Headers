
@interface MAAutoAssetLock : NSObject <NSSecureCoding> {
    NSDictionary * _assetAttributes;
    MAAutoAssetSelector * _fullAssetSelector;
    bool  _inhibitedFromEmergencyRemoval;
    NSURL * _localContentURL;
    NSMutableDictionary * _lockReasons;
}

@property (nonatomic, readonly, retain) NSDictionary *assetAttributes;
@property (nonatomic, readonly, retain) MAAutoAssetSelector *fullAssetSelector;
@property (nonatomic) bool inhibitedFromEmergencyRemoval;
@property (nonatomic, readonly, retain) NSURL *localContentURL;
@property (nonatomic, retain) NSMutableDictionary *lockReasons;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetAttributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullAssetSelector;
- (bool)inhibitedFromEmergencyRemoval;
- (id)initForSelector:(id)arg1 withLocalContentURL:(id)arg2 withAssetAttributes:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)localContentURL;
- (id)lockReasons;
- (void)setInhibitedFromEmergencyRemoval:(bool)arg1;
- (void)setLockReasons:(id)arg1;
- (id)summary;

@end

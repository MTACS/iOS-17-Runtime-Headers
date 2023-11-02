
@interface MAAutoAssetSetAtomicEntry : NSObject <NSSecureCoding> {
    NSDictionary * _assetAttributes;
    NSString * _assetID;
    MAAutoAssetSelector * _fullAssetSelector;
    bool  _inhibitedFromEmergencyRemoval;
    NSURL * _localContentURL;
}

@property (nonatomic, readonly, retain) NSDictionary *assetAttributes;
@property (nonatomic, readonly, retain) NSString *assetID;
@property (nonatomic, readonly, retain) MAAutoAssetSelector *fullAssetSelector;
@property (nonatomic) bool inhibitedFromEmergencyRemoval;
@property (nonatomic, readonly, retain) NSURL *localContentURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetAttributes;
- (id)assetID;
- (id)copy;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullAssetSelector;
- (bool)inhibitedFromEmergencyRemoval;
- (id)initWithCoder:(id)arg1;
- (id)initWithFullAssetSelector:(id)arg1 withAssetID:(id)arg2 withLocalContentURL:(id)arg3 withAssetAttributes:(id)arg4 inhibitedFromEmergencyRemoval:(bool)arg5;
- (id)localContentURL;
- (void)setInhibitedFromEmergencyRemoval:(bool)arg1;
- (id)summary;

@end

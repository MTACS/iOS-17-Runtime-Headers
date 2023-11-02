
@interface MAAutoAssetSetInfoFound : NSObject <NSSecureCoding> {
    NSString * _assetSetIdentifier;
    MAAutoAssetSetStatus * _currentSetStatus;
}

@property (nonatomic, readonly, retain) NSString *assetSetIdentifier;
@property (nonatomic, readonly, retain) MAAutoAssetSetStatus *currentSetStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetSetIdentifier;
- (id)currentSetStatus;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initForAssetSetIdentifier:(id)arg1 reportingStatus:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)summary;

@end

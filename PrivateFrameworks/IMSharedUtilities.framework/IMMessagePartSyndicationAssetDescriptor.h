
@interface IMMessagePartSyndicationAssetDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _assetSyndications;
    NSString * _serializedString;
}

@property (nonatomic, retain) NSDictionary *assetSyndications;
@property (nonatomic, readonly) NSString *serializedString;

+ (id)descriptorFromSerializedString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetSyndications;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetSyndications:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeSyndicationAssetsInfoFor:(long long)arg1;
- (void)replaceSyndicationAssetsInfoWith:(id)arg1 asset:(long long)arg2;
- (id)serializedString;
- (void)setAssetSyndications:(id)arg1;
- (id)syndicationForPartIndex:(unsigned long long)arg1 asset:(long long)arg2;
- (void)updateSyndicationAssetWithInfo:(id)arg1 asset:(long long)arg2;

@end

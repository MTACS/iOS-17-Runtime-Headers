
@interface PHObjectPlaceholder : PHObject {
    long long  _assetMediaType;
    NSString * _localIdentifier;
}

@property long long assetMediaType;

- (void).cxx_destruct;
- (long long)assetMediaType;
- (unsigned long long)hash;
- (id)initWithLocalIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localIdentifier;
- (void)setAssetMediaType:(long long)arg1;

@end


@interface SFSSResourceAsset : NSObject {
    NSString * _assetPath;
    long long  _contentVersion;
    NSString * _language;
}

@property (nonatomic, copy) NSString *assetPath;
@property (nonatomic, readonly) long long contentVersion;
@property (nonatomic, readonly, copy) NSString *language;

+ (id)generateResourceAssetFromResourceKeyString:(id)arg1;

- (void).cxx_destruct;
- (id)assetPath;
- (long long)contentVersion;
- (id)init:(id)arg1 contentVersion:(long long)arg2;
- (id)initWithPath:(id)arg1;
- (id)key;
- (id)language;
- (void)setAssetPath:(id)arg1;

@end

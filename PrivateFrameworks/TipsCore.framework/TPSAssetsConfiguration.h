
@interface TPSAssetsConfiguration : NSObject <NSCopying, NSSecureCoding> {
    TPSAssetFileInfoManager * _assetFileInfoManager;
    TPSAssets * _assets;
    NSString * _language;
    long long  _userInterfaceStyle;
}

@property (nonatomic, copy) TPSAssetFileInfoManager *assetFileInfoManager;
@property (nonatomic, copy) TPSAssets *assets;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) long long userInterfaceStyle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetFileInfoManager;
- (id)assets;
- (id)cacheIdentifierForType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)identifierForType:(long long)arg1;
- (id)initWithAssets:(id)arg1 language:(id)arg2 userInterfaceStyle:(long long)arg3 assetFileInfoManager:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)language;
- (void)setAssetFileInfoManager:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (long long)userInterfaceStyle;

@end

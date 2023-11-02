
@interface CESRAssetConfig : NSObject <NSSecureCoding> {
    SFEntitledAssetConfig * _config;
}

@property (nonatomic, readonly) unsigned long long assetType;
@property (nonatomic, readonly) SFEntitledAssetConfig *config;
@property (nonatomic, readonly, copy) NSString *language;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)assetType;
- (id)config;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1 assetType:(unsigned long long)arg2;
- (id)initWithLanguage:(id)arg1 task:(id)arg2;
- (id)initWithSFEntitledAssetConfig:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)language;

@end

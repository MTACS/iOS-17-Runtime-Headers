
@interface SFEntitledAssetConfig : NSObject <NSSecureCoding> {
    unsigned long long  _assetType;
    NSString * _language;
}

@property (nonatomic, readonly) unsigned long long assetType;
@property (nonatomic, readonly, copy) NSString *language;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)assetType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1 assetType:(unsigned long long)arg2;
- (id)initWithLanguage:(id)arg1 task:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)language;

@end

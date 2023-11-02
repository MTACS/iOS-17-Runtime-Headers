
@interface SFSSVoiceAsset : NSObject {
    NSString * _assetPath;
    long long  _contentVersion;
    long long  _footprint;
    long long  _gender;
    NSString * _language;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, copy) NSString *assetPath;
@property (nonatomic, readonly) long long contentVersion;
@property (nonatomic, readonly) long long footprint;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) long long type;

+ (id)generateVoiceAssetFromVoiceKeyString:(id)arg1;

- (void).cxx_destruct;
- (id)assetPath;
- (long long)contentVersion;
- (long long)footprint;
- (long long)gender;
- (id)init:(id)arg1 gender:(long long)arg2 name:(id)arg3 type:(long long)arg4 footprint:(long long)arg5 contentVersion:(long long)arg6;
- (id)initWithPath:(id)arg1;
- (id)key;
- (id)language;
- (id)name;
- (void)setAssetPath:(id)arg1;
- (long long)type;

@end

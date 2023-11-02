
@interface VSTrialVoice : NSObject {
    unsigned long long  _assetSize;
    long long  _compatibilityVersion;
    long long  _footprint;
    long long  _gender;
    NSString * _language;
    NSString * _name;
    NSString * _path;
    long long  _type;
    unsigned long long  _version;
}

@property (nonatomic) unsigned long long assetSize;
@property (nonatomic) long long compatibilityVersion;
@property (nonatomic) long long footprint;
@property (nonatomic) long long gender;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSString *path;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long version;

- (void).cxx_destruct;
- (unsigned long long)assetSize;
- (long long)compatibilityVersion;
- (id)description;
- (id)factorName;
- (long long)footprint;
- (long long)gender;
- (id)initWithFactorLevel:(id)arg1;
- (id)initWithFactorName:(id)arg1;
- (id)initWithLanguage:(id)arg1 name:(id)arg2;
- (bool)isLocal;
- (id)language;
- (id)name;
- (id)path;
- (double)preferenceScore;
- (void)setAssetSize:(unsigned long long)arg1;
- (void)setCompatibilityVersion:(long long)arg1;
- (void)setFootprint:(long long)arg1;
- (void)setGender:(long long)arg1;
- (void)setLanguage:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (long long)type;
- (unsigned long long)version;

@end

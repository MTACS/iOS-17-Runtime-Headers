
@interface _LTDOfflineConfigurationModel : NSObject {
    bool  _hasCapabilityIdentifiers;
    NSDictionary * _languagePairConfigs;
    NSString * _pairAssetConfigFile;
    NSArray * _pairAssetList;
    long long  _pairAssetRequiredANECapability;
    NSDictionary * _root;
}

@property (nonatomic, readonly) bool hasCapabilityIdentifiers;
@property (nonatomic, readonly) NSArray *languageIdentifiers;
@property (nonatomic, readonly) NSDictionary *languagePairConfigs;
@property (nonatomic, readonly) NSArray *languagePairs;
@property (nonatomic, readonly) NSString *pairAssetConfigFile;
@property (nonatomic, readonly) NSArray *pairAssetList;
@property (nonatomic, readonly) long long pairAssetRequiredANECapability;
@property (nonatomic, readonly) NSDictionary *root;

+ (bool)isPassthroughLocalePairIdentifier:(id)arg1;
+ (id)passthroughConfiguration;

- (void).cxx_destruct;
- (id)_offlinePairConfigurationWithIdentifier:(id)arg1 capability:(long long)arg2;
- (id)debugDescription;
- (id)description;
- (bool)hasCapabilityIdentifiers;
- (id)initWithDictionary:(id)arg1;
- (id)languageIdentifiers;
- (id)languagePairConfigs;
- (id)languagePairs;
- (id)offlinePairConfigurationWithIdentifier:(id)arg1;
- (id)pairAssetConfigFile;
- (id)pairAssetList;
- (long long)pairAssetRequiredANECapability;
- (id)root;

@end

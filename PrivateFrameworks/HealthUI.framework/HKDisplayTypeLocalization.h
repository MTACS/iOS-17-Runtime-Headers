
@interface HKDisplayTypeLocalization : NSObject <NSCopying> {
    NSString * _cautionaryTextKey;
    NSString * _displayNameFitnessJrKey;
    NSString * _displayNameKey;
    NSString * _embeddedDisplayNameKey;
    NSString * _keywordsNameKey;
    NSString * _labelDisplayNameKey;
    NSString * _localizationTableNameOverride;
    NSString * _localizedKeySuffix;
    NSString * _shortenedDisplayNameKey;
    NSString * _summaryFitnessJrKey;
    NSString * _summaryForEnhancedFeatureNameKey;
    NSString * _summaryIPadNameKey;
    NSString * _summaryNameKey;
    NSString * _summaryPairedWatchNameKey;
    NSString * _titleEmbeddedDisplayNameKey;
    NSString * _unitChangeCautionaryTextKey;
    NSDictionary * _unitNameKeyOverrides;
}

@property (nonatomic, readonly, copy) NSString *cautionaryText;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *displayNameForFitnessJr;
@property (nonatomic, readonly, copy) NSString *displayNameKey;
@property (nonatomic, readonly, copy) NSString *embeddedDisplayName;
@property (nonatomic, readonly, copy) NSSet *keywords;
@property (nonatomic, readonly, copy) NSString *labelDisplayName;
@property (nonatomic, readonly, copy) NSString *localizationTableNameOverride;
@property (nonatomic, readonly, copy) NSString *localizedKeySuffix;
@property (nonatomic, readonly, copy) NSString *shortenedDisplayName;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSString *summaryForEnhancedFeature;
@property (nonatomic, readonly) NSString *summaryForFitnessJr;
@property (nonatomic, readonly) NSString *summaryForPairedWatch;
@property (nonatomic, readonly, copy) NSString *titleEmbeddedDisplayName;
@property (nonatomic, readonly, copy) NSString *unitChangeCautionaryText;
@property (nonatomic, readonly, copy) NSDictionary *unitNameKeyOverrides;

- (void).cxx_destruct;
- (void)_expandLocalizationKeys;
- (id)_localizedStringForKeyOrNil:(id)arg1;
- (id)_localizedStringWithKey:(id)arg1;
- (id)_rawLocalizedStringForKey:(id)arg1;
- (id)cautionaryText;
- (id)copyWithLocalizationTableNameOverride:(id)arg1;
- (id)copyWithLocalizedKeySuffix:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayName;
- (id)displayNameForFitnessJr;
- (id)displayNameKey;
- (id)embeddedDisplayName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDisplayNameKey:(id)arg1 labelDisplayNameKey:(id)arg2 localizationTableNameOverride:(id)arg3 localizedKeySuffix:(id)arg4 unitNameKeyOverrides:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)labelDisplayName;
- (id)localizationTableNameOverride;
- (id)localizedKeySuffix;
- (id)shortenedDisplayName;
- (id)summary;
- (id)summaryForEnhancedFeature;
- (id)summaryForFitnessJr;
- (id)summaryForPairedWatch;
- (id)titleEmbeddedDisplayName;
- (id)unitChangeCautionaryText;
- (id)unitDisplayNameKeyOverrideForUnit:(id)arg1 nameContext:(long long)arg2;
- (id)unitNameKeyOverrides;

@end

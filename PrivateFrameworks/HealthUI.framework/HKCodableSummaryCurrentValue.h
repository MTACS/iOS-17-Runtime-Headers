
@interface HKCodableSummaryCurrentValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryCurrentValue_1 { 
        unsigned int latestSupportedVersion : 1; 
        unsigned int minimumSupportedVersion : 1; 
    }  _has;
    NSString * _kindRawValue;
    long long  _latestSupportedVersion;
    HKCodableMetadataDictionary * _metadataDictionary;
    long long  _minimumSupportedVersion;
    NSData * _queryConfigurationData;
    HKCodableSummarySupplementaryValue * _supplementaryValue;
    NSData * _valueData;
}

@property (nonatomic, readonly) bool hasKindRawValue;
@property (nonatomic) bool hasLatestSupportedVersion;
@property (nonatomic, readonly) bool hasMetadataDictionary;
@property (nonatomic) bool hasMinimumSupportedVersion;
@property (nonatomic, readonly) bool hasQueryConfigurationData;
@property (nonatomic, readonly) bool hasSupplementaryValue;
@property (nonatomic, readonly) bool hasValueData;
@property (nonatomic, retain) NSString *kindRawValue;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic, retain) HKCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) long long minimumSupportedVersion;
@property (nonatomic, retain) NSData *queryConfigurationData;
@property (nonatomic, retain) HKCodableSummarySupplementaryValue *supplementaryValue;
@property (nonatomic, retain) NSData *valueData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKindRawValue;
- (bool)hasLatestSupportedVersion;
- (bool)hasMetadataDictionary;
- (bool)hasMinimumSupportedVersion;
- (bool)hasQueryConfigurationData;
- (bool)hasSupplementaryValue;
- (bool)hasValueData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)kindRawValue;
- (long long)latestSupportedVersion;
- (void)mergeFrom:(id)arg1;
- (id)metadataDictionary;
- (long long)minimumSupportedVersion;
- (id)queryConfigurationData;
- (bool)readFrom:(id)arg1;
- (void)setHasLatestSupportedVersion:(bool)arg1;
- (void)setHasMinimumSupportedVersion:(bool)arg1;
- (void)setKindRawValue:(id)arg1;
- (void)setLatestSupportedVersion:(long long)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setQueryConfigurationData:(id)arg1;
- (void)setSupplementaryValue:(id)arg1;
- (void)setValueData:(id)arg1;
- (id)supplementaryValue;
- (id)valueData;
- (void)writeTo:(id)arg1;

@end

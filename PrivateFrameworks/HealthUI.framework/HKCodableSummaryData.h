
@interface HKCodableSummaryData : PBCodable <NSCopying> {
    NSString * _audienceRawValue;
    NSData * _contentData;
    HKCodableQueryAnchor * _databaseChangesQueryAnchor;
    struct APPLE_HKCodableSummaryData_1 { 
        unsigned int latestSupportedVersion : 1; 
        unsigned int minimumSupportedVersion : 1; 
    }  _has;
    NSString * _kindRawValue;
    long long  _latestSupportedVersion;
    long long  _minimumSupportedVersion;
}

@property (nonatomic, retain) NSString *audienceRawValue;
@property (nonatomic, retain) NSData *contentData;
@property (nonatomic, retain) HKCodableQueryAnchor *databaseChangesQueryAnchor;
@property (nonatomic, readonly) bool hasAudienceRawValue;
@property (nonatomic, readonly) bool hasContentData;
@property (nonatomic, readonly) bool hasDatabaseChangesQueryAnchor;
@property (nonatomic, readonly) bool hasKindRawValue;
@property (nonatomic) bool hasLatestSupportedVersion;
@property (nonatomic) bool hasMinimumSupportedVersion;
@property (nonatomic, retain) NSString *kindRawValue;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

- (void).cxx_destruct;
- (id)audienceRawValue;
- (id)contentData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseChangesQueryAnchor;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudienceRawValue;
- (bool)hasContentData;
- (bool)hasDatabaseChangesQueryAnchor;
- (bool)hasKindRawValue;
- (bool)hasLatestSupportedVersion;
- (bool)hasMinimumSupportedVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)kindRawValue;
- (long long)latestSupportedVersion;
- (void)mergeFrom:(id)arg1;
- (long long)minimumSupportedVersion;
- (bool)readFrom:(id)arg1;
- (void)setAudienceRawValue:(id)arg1;
- (void)setContentData:(id)arg1;
- (void)setDatabaseChangesQueryAnchor:(id)arg1;
- (void)setHasLatestSupportedVersion:(bool)arg1;
- (void)setHasMinimumSupportedVersion:(bool)arg1;
- (void)setKindRawValue:(id)arg1;
- (void)setLatestSupportedVersion:(long long)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)writeTo:(id)arg1;

@end

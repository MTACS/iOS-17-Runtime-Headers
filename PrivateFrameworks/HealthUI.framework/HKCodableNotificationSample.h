
@interface HKCodableNotificationSample : PBCodable <NSCopying> {
    long long  _categoryValue;
    long long  _dataType;
    double  _endDate;
    struct APPLE_HKCodableNotificationSample_1 { 
        unsigned int categoryValue : 1; 
        unsigned int dataType : 1; 
        unsigned int endDate : 1; 
        unsigned int latestSupportedVersion : 1; 
        unsigned int minimumSupportedVersion : 1; 
        unsigned int startDate : 1; 
    }  _has;
    long long  _latestSupportedVersion;
    HKCodableMetadataDictionary * _metadataDictionary;
    long long  _minimumSupportedVersion;
    NSString * _sampleUUID;
    double  _startDate;
}

@property (nonatomic) long long categoryValue;
@property (nonatomic) long long dataType;
@property (nonatomic) double endDate;
@property (nonatomic) bool hasCategoryValue;
@property (nonatomic) bool hasDataType;
@property (nonatomic) bool hasEndDate;
@property (nonatomic) bool hasLatestSupportedVersion;
@property (nonatomic, readonly) bool hasMetadataDictionary;
@property (nonatomic) bool hasMinimumSupportedVersion;
@property (nonatomic, readonly) bool hasSampleUUID;
@property (nonatomic) bool hasStartDate;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic, retain) HKCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) long long minimumSupportedVersion;
@property (nonatomic, retain) NSString *sampleUUID;
@property (nonatomic) double startDate;

- (void).cxx_destruct;
- (long long)categoryValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataType;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasCategoryValue;
- (bool)hasDataType;
- (bool)hasEndDate;
- (bool)hasLatestSupportedVersion;
- (bool)hasMetadataDictionary;
- (bool)hasMinimumSupportedVersion;
- (bool)hasSampleUUID;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)latestSupportedVersion;
- (void)mergeFrom:(id)arg1;
- (id)metadataDictionary;
- (long long)minimumSupportedVersion;
- (bool)readFrom:(id)arg1;
- (id)sampleUUID;
- (void)setCategoryValue:(long long)arg1;
- (void)setDataType:(long long)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasCategoryValue:(bool)arg1;
- (void)setHasDataType:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasLatestSupportedVersion:(bool)arg1;
- (void)setHasMinimumSupportedVersion:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setLatestSupportedVersion:(long long)arg1;
- (void)setMetadataDictionary:(id)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setSampleUUID:(id)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end

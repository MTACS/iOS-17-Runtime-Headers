
@interface HKCodableNotificationDataSourceQueryData : PBCodable <NSCopying> {
    long long  _count;
    long long  _dataType;
    struct APPLE_HKCodableNotificationDataSourceQueryData_1 { 
        unsigned int count : 1; 
        unsigned int dataType : 1; 
        unsigned int latestSupportedVersion : 1; 
        unsigned int minimumSupportedVersion : 1; 
    }  _has;
    long long  _latestSupportedVersion;
    long long  _minimumSupportedVersion;
    NSMutableArray * _samples;
}

@property (nonatomic) long long count;
@property (nonatomic) long long dataType;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasDataType;
@property (nonatomic) bool hasLatestSupportedVersion;
@property (nonatomic) bool hasMinimumSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;
@property (nonatomic, retain) NSMutableArray *samples;

+ (Class)samplesType;

- (void).cxx_destruct;
- (void)addSamples:(id)arg1;
- (void)clearSamples;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (long long)dataType;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasDataType;
- (bool)hasLatestSupportedVersion;
- (bool)hasMinimumSupportedVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)latestSupportedVersion;
- (void)mergeFrom:(id)arg1;
- (long long)minimumSupportedVersion;
- (bool)readFrom:(id)arg1;
- (id)samples;
- (id)samplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)samplesCount;
- (void)setCount:(long long)arg1;
- (void)setDataType:(long long)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasDataType:(bool)arg1;
- (void)setHasLatestSupportedVersion:(bool)arg1;
- (void)setHasMinimumSupportedVersion:(bool)arg1;
- (void)setLatestSupportedVersion:(long long)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)setSamples:(id)arg1;
- (void)writeTo:(id)arg1;

@end

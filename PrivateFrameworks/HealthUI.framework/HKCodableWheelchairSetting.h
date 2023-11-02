
@interface HKCodableWheelchairSetting : PBCodable <NSCopying> {
    struct APPLE_HKCodableWheelchairSetting_1 { 
        unsigned int latestSupportedVersion : 1; 
        unsigned int minimumSupportedVersion : 1; 
        unsigned int isUsingWheelchair : 1; 
    }  _has;
    bool  _isUsingWheelchair;
    long long  _latestSupportedVersion;
    long long  _minimumSupportedVersion;
}

@property (nonatomic) bool hasIsUsingWheelchair;
@property (nonatomic) bool hasLatestSupportedVersion;
@property (nonatomic) bool hasMinimumSupportedVersion;
@property (nonatomic) bool isUsingWheelchair;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsUsingWheelchair;
- (bool)hasLatestSupportedVersion;
- (bool)hasMinimumSupportedVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isUsingWheelchair;
- (long long)latestSupportedVersion;
- (void)mergeFrom:(id)arg1;
- (long long)minimumSupportedVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasIsUsingWheelchair:(bool)arg1;
- (void)setHasLatestSupportedVersion:(bool)arg1;
- (void)setHasMinimumSupportedVersion:(bool)arg1;
- (void)setIsUsingWheelchair:(bool)arg1;
- (void)setLatestSupportedVersion:(long long)arg1;
- (void)setMinimumSupportedVersion:(long long)arg1;
- (void)writeTo:(id)arg1;

@end

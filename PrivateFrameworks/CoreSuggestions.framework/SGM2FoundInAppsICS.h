
@interface SGM2FoundInAppsICS : PBCodable <NSCopying> {
    int  _datetime;
    struct { 
        unsigned int datetime : 1; 
        unsigned int timezone : 1; 
    }  _has;
    NSString * _key;
    int  _timezone;
}

@property (nonatomic) int datetime;
@property (nonatomic) bool hasDatetime;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasTimezone;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int timezone;

- (void).cxx_destruct;
- (int)StringAsDatetime:(id)arg1;
- (int)StringAsTimezone:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)datetime;
- (id)datetimeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDatetime;
- (bool)hasKey;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDatetime:(int)arg1;
- (void)setHasDatetime:(bool)arg1;
- (void)setHasTimezone:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setTimezone:(int)arg1;
- (int)timezone;
- (id)timezoneAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

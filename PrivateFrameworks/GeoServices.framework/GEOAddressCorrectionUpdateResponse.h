
@interface GEOAddressCorrectionUpdateResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int has_retryScheduleInDays : 1; 
    }  _flags;
    unsigned int  _retryScheduleInDays;
}

@property (nonatomic) bool hasRetryScheduleInDays;
@property (nonatomic) unsigned int retryScheduleInDays;

+ (bool)isValid:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRetryScheduleInDays;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)retryScheduleInDays;
- (void)setHasRetryScheduleInDays:(bool)arg1;
- (void)setRetryScheduleInDays:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end

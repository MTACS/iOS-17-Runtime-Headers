
@interface POMMESSchemaPOMMESCacheEntry : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sizeInBytes : 1; 
        unsigned int timeToLiveInSeconds : 1; 
        unsigned int origin : 1; 
    }  _has;
    bool  _hasPegasusDomain;
    int  _origin;
    NSString * _pegasusDomain;
    unsigned int  _sizeInBytes;
    unsigned int  _timeToLiveInSeconds;
}

@property (nonatomic) bool hasOrigin;
@property (nonatomic) bool hasPegasusDomain;
@property (nonatomic) bool hasSizeInBytes;
@property (nonatomic) bool hasTimeToLiveInSeconds;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int origin;
@property (nonatomic, copy) NSString *pegasusDomain;
@property (nonatomic) unsigned int sizeInBytes;
@property (nonatomic) unsigned int timeToLiveInSeconds;

- (void).cxx_destruct;
- (void)deleteOrigin;
- (void)deletePegasusDomain;
- (void)deleteSizeInBytes;
- (void)deleteTimeToLiveInSeconds;
- (id)dictionaryRepresentation;
- (bool)hasOrigin;
- (bool)hasPegasusDomain;
- (bool)hasSizeInBytes;
- (bool)hasTimeToLiveInSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)origin;
- (id)pegasusDomain;
- (bool)readFrom:(id)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setHasPegasusDomain:(bool)arg1;
- (void)setHasSizeInBytes:(bool)arg1;
- (void)setHasTimeToLiveInSeconds:(bool)arg1;
- (void)setOrigin:(int)arg1;
- (void)setPegasusDomain:(id)arg1;
- (void)setSizeInBytes:(unsigned int)arg1;
- (void)setTimeToLiveInSeconds:(unsigned int)arg1;
- (unsigned int)sizeInBytes;
- (id)suppressMessageUnderConditions;
- (unsigned int)timeToLiveInSeconds;
- (void)writeTo:(id)arg1;

@end

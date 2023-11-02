
@interface POMMESSchemaPOMMESCacheStoringStarted : SISchemaInstrumentationMessage {
    POMMESSchemaPOMMESCacheEntry * _entry;
    struct { 
        unsigned int resultSizeInBytes : 1; 
        unsigned int timeToLiveInSeconds : 1; 
    }  _has;
    bool  _hasEntry;
    bool  _hasResultDomain;
    NSString * _resultDomain;
    unsigned int  _resultSizeInBytes;
    unsigned int  _timeToLiveInSeconds;
}

@property (nonatomic, retain) POMMESSchemaPOMMESCacheEntry *entry;
@property (nonatomic) bool hasEntry;
@property (nonatomic) bool hasResultDomain;
@property (nonatomic) bool hasResultSizeInBytes;
@property (nonatomic) bool hasTimeToLiveInSeconds;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *resultDomain;
@property (nonatomic) unsigned int resultSizeInBytes;
@property (nonatomic) unsigned int timeToLiveInSeconds;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEntry;
- (void)deleteResultDomain;
- (void)deleteResultSizeInBytes;
- (void)deleteTimeToLiveInSeconds;
- (id)dictionaryRepresentation;
- (id)entry;
- (bool)hasEntry;
- (bool)hasResultDomain;
- (bool)hasResultSizeInBytes;
- (bool)hasTimeToLiveInSeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)resultDomain;
- (unsigned int)resultSizeInBytes;
- (void)setEntry:(id)arg1;
- (void)setHasEntry:(bool)arg1;
- (void)setHasResultDomain:(bool)arg1;
- (void)setHasResultSizeInBytes:(bool)arg1;
- (void)setHasTimeToLiveInSeconds:(bool)arg1;
- (void)setResultDomain:(id)arg1;
- (void)setResultSizeInBytes:(unsigned int)arg1;
- (void)setTimeToLiveInSeconds:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)timeToLiveInSeconds;
- (void)writeTo:(id)arg1;

@end

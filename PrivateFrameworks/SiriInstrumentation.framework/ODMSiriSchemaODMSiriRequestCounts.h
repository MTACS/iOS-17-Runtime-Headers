
@interface ODMSiriSchemaODMSiriRequestCounts : SISchemaInstrumentationMessage {
    unsigned int  _allRequestCount;
    struct { 
        unsigned int allRequestCount : 1; 
        unsigned int userRequestCount : 1; 
    }  _has;
    unsigned int  _userRequestCount;
}

@property (nonatomic) unsigned int allRequestCount;
@property (nonatomic) bool hasAllRequestCount;
@property (nonatomic) bool hasUserRequestCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int userRequestCount;

- (unsigned int)allRequestCount;
- (void)deleteAllRequestCount;
- (void)deleteUserRequestCount;
- (id)dictionaryRepresentation;
- (bool)hasAllRequestCount;
- (bool)hasUserRequestCount;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAllRequestCount:(unsigned int)arg1;
- (void)setHasAllRequestCount:(bool)arg1;
- (void)setHasUserRequestCount:(bool)arg1;
- (void)setUserRequestCount:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (unsigned int)userRequestCount;
- (void)writeTo:(id)arg1;

@end

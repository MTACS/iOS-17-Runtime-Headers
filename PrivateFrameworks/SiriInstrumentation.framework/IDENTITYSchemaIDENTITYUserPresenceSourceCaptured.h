
@interface IDENTITYSchemaIDENTITYUserPresenceSourceCaptured : SISchemaInstrumentationMessage {
    struct { 
        unsigned int userPresenceSource : 1; 
    }  _has;
    int  _userPresenceSource;
}

@property (nonatomic) bool hasUserPresenceSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int userPresenceSource;

- (void)deleteUserPresenceSource;
- (id)dictionaryRepresentation;
- (bool)hasUserPresenceSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasUserPresenceSource:(bool)arg1;
- (void)setUserPresenceSource:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)userPresenceSource;
- (void)writeTo:(id)arg1;

@end

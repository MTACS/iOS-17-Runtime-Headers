
@interface SISchemaTVRemoteInvocationContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int remoteType : 1; 
    }  _has;
    int  _remoteType;
}

@property (nonatomic) bool hasRemoteType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int remoteType;

- (void)deleteRemoteType;
- (id)dictionaryRepresentation;
- (bool)hasRemoteType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)remoteType;
- (void)setHasRemoteType:(bool)arg1;
- (void)setRemoteType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

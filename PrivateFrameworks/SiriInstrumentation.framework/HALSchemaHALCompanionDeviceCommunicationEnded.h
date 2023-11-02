
@interface HALSchemaHALCompanionDeviceCommunicationEnded : SISchemaInstrumentationMessage {
    int  _connectionType;
    bool  _didConnectionTimeOut;
    struct { 
        unsigned int connectionType : 1; 
        unsigned int didConnectionTimeOut : 1; 
    }  _has;
}

@property (nonatomic) int connectionType;
@property (nonatomic) bool didConnectionTimeOut;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic) bool hasDidConnectionTimeOut;
@property (nonatomic, readonly) NSData *jsonData;

- (int)connectionType;
- (void)deleteConnectionType;
- (void)deleteDidConnectionTimeOut;
- (id)dictionaryRepresentation;
- (bool)didConnectionTimeOut;
- (bool)hasConnectionType;
- (bool)hasDidConnectionTimeOut;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setDidConnectionTimeOut:(bool)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasDidConnectionTimeOut:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

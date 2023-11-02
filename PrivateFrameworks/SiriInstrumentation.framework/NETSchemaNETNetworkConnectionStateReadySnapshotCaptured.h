
@interface NETSchemaNETNetworkConnectionStateReadySnapshotCaptured : SISchemaInstrumentationMessage {
    unsigned int  _connectionEstablishmentAttemptDelay;
    unsigned int  _connectionEstablishmentPreviousAttemptCount;
    NSString * _connectionInfo;
    struct { 
        unsigned int connectionEstablishmentPreviousAttemptCount : 1; 
        unsigned int connectionEstablishmentAttemptDelay : 1; 
    }  _has;
    bool  _hasConnectionInfo;
}

@property (nonatomic) unsigned int connectionEstablishmentAttemptDelay;
@property (nonatomic) unsigned int connectionEstablishmentPreviousAttemptCount;
@property (nonatomic, copy) NSString *connectionInfo;
@property (nonatomic) bool hasConnectionEstablishmentAttemptDelay;
@property (nonatomic) bool hasConnectionEstablishmentPreviousAttemptCount;
@property (nonatomic) bool hasConnectionInfo;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (unsigned int)connectionEstablishmentAttemptDelay;
- (unsigned int)connectionEstablishmentPreviousAttemptCount;
- (id)connectionInfo;
- (void)deleteConnectionEstablishmentAttemptDelay;
- (void)deleteConnectionEstablishmentPreviousAttemptCount;
- (void)deleteConnectionInfo;
- (id)dictionaryRepresentation;
- (bool)hasConnectionEstablishmentAttemptDelay;
- (bool)hasConnectionEstablishmentPreviousAttemptCount;
- (bool)hasConnectionInfo;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setConnectionEstablishmentAttemptDelay:(unsigned int)arg1;
- (void)setConnectionEstablishmentPreviousAttemptCount:(unsigned int)arg1;
- (void)setConnectionInfo:(id)arg1;
- (void)setHasConnectionEstablishmentAttemptDelay:(bool)arg1;
- (void)setHasConnectionEstablishmentPreviousAttemptCount:(bool)arg1;
- (void)setHasConnectionInfo:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

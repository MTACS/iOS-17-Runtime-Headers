
@interface SISchemaLogicalTimestamp : SISchemaInstrumentationMessage {
    SISchemaUUID * _clockIdentifier;
    struct { 
        unsigned int timestampInNanoseconds : 1; 
    }  _has;
    bool  _hasClockIdentifier;
    long long  _timestampInNanoseconds;
}

@property (nonatomic, retain) SISchemaUUID *clockIdentifier;
@property (nonatomic) bool hasClockIdentifier;
@property (nonatomic) bool hasTimestampInNanoseconds;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) long long timestampInNanoseconds;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)clockIdentifier;
- (void)deleteClockIdentifier;
- (void)deleteTimestampInNanoseconds;
- (id)dictionaryRepresentation;
- (bool)hasClockIdentifier;
- (bool)hasTimestampInNanoseconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setClockIdentifier:(id)arg1;
- (void)setHasClockIdentifier:(bool)arg1;
- (void)setHasTimestampInNanoseconds:(bool)arg1;
- (void)setTimestampInNanoseconds:(long long)arg1;
- (id)suppressMessageUnderConditions;
- (long long)timestampInNanoseconds;
- (void)writeTo:(id)arg1;

@end

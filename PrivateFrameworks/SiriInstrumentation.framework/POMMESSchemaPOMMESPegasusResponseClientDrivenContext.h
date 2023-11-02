
@interface POMMESSchemaPOMMESPegasusResponseClientDrivenContext : SISchemaInstrumentationMessage {
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
}

@property (nonatomic) bool hasType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int type;

- (void)deleteType;
- (id)dictionaryRepresentation;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)type;
- (void)writeTo:(id)arg1;

@end

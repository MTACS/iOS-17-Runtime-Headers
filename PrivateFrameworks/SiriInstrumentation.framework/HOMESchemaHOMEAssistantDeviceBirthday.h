
@interface HOMESchemaHOMEAssistantDeviceBirthday : SISchemaInstrumentationMessage {
    struct { 
        unsigned int year : 1; 
        unsigned int month : 1; 
    }  _has;
    unsigned int  _month;
    unsigned int  _year;
}

@property (nonatomic) bool hasMonth;
@property (nonatomic) bool hasYear;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int month;
@property (nonatomic) unsigned int year;

- (void)deleteMonth;
- (void)deleteYear;
- (id)dictionaryRepresentation;
- (bool)hasMonth;
- (bool)hasYear;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)month;
- (bool)readFrom:(id)arg1;
- (void)setHasMonth:(bool)arg1;
- (void)setHasYear:(bool)arg1;
- (void)setMonth:(unsigned int)arg1;
- (void)setYear:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;
- (unsigned int)year;

@end

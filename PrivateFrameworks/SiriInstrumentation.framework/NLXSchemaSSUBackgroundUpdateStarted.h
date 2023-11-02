
@interface NLXSchemaSSUBackgroundUpdateStarted : SISchemaInstrumentationMessage {
    int  _backgroundUpdateType;
    struct { 
        unsigned int backgroundUpdateType : 1; 
    }  _has;
}

@property (nonatomic) int backgroundUpdateType;
@property (nonatomic) bool hasBackgroundUpdateType;
@property (nonatomic, readonly) NSData *jsonData;

- (int)backgroundUpdateType;
- (void)deleteBackgroundUpdateType;
- (id)dictionaryRepresentation;
- (bool)hasBackgroundUpdateType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBackgroundUpdateType:(int)arg1;
- (void)setHasBackgroundUpdateType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

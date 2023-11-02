
@interface NLXSchemaCDMCorrectionOutcome : SISchemaInstrumentationMessage {
    int  _correctionType;
    struct { 
        unsigned int correctionType : 1; 
    }  _has;
}

@property (nonatomic) int correctionType;
@property (nonatomic) bool hasCorrectionType;
@property (nonatomic, readonly) NSData *jsonData;

- (int)correctionType;
- (void)deleteCorrectionType;
- (id)dictionaryRepresentation;
- (bool)hasCorrectionType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCorrectionType:(int)arg1;
- (void)setHasCorrectionType:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

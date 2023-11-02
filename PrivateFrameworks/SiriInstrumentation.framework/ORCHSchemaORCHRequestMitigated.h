
@interface ORCHSchemaORCHRequestMitigated : SISchemaInstrumentationMessage {
    struct { 
        unsigned int mitigationSource : 1; 
    }  _has;
    int  _mitigationSource;
}

@property (nonatomic) bool hasMitigationSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mitigationSource;

- (void)deleteMitigationSource;
- (id)dictionaryRepresentation;
- (bool)hasMitigationSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)mitigationSource;
- (bool)readFrom:(id)arg1;
- (void)setHasMitigationSource:(bool)arg1;
- (void)setMitigationSource:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

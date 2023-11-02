
@interface POMMESSchemaPOMMESPegasusResponseServerDrivenContext : SISchemaInstrumentationMessage {
    NSArray * _catIds;
}

@property (nonatomic, copy) NSArray *catIds;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)addCatId:(id)arg1;
- (id)catIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)catIdCount;
- (id)catIds;
- (void)clearCatId;
- (void)deleteCatId;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCatIds:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

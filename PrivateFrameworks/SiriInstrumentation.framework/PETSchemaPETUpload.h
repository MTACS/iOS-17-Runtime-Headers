
@interface PETSchemaPETUpload : SISchemaTopLevelUnionType {
    NSArray * _aggregated_messages;
    NSData * _compressed_data;
    NSData * _compressed_messages;
    struct { 
        unsigned int is_compressed : 1; 
    }  _has;
    bool  _hasCompressed_data;
    bool  _hasCompressed_messages;
    bool  _hasMetadata;
    bool  _is_compressed;
    PETSchemaPETMetadata * _metadata;
    NSArray * _trial_messages;
    NSArray * _unaggregated_messages;
}

@property (nonatomic, copy) NSArray *aggregated_messages;
@property (nonatomic, copy) NSData *compressed_data;
@property (nonatomic, copy) NSData *compressed_messages;
@property (nonatomic) bool hasCompressed_data;
@property (nonatomic) bool hasCompressed_messages;
@property (nonatomic) bool hasIs_compressed;
@property (nonatomic) bool hasMetadata;
@property (nonatomic) bool is_compressed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) PETSchemaPETMetadata *metadata;
@property (nonatomic, copy) NSArray *trial_messages;
@property (nonatomic, copy) NSArray *unaggregated_messages;

- (void).cxx_destruct;
- (void)addAggregated_messages:(id)arg1;
- (void)addTrial_messages:(id)arg1;
- (void)addUnaggregated_messages:(id)arg1;
- (id)aggregated_messages;
- (id)aggregated_messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aggregated_messagesCount;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearAggregated_messages;
- (void)clearTrial_messages;
- (void)clearUnaggregated_messages;
- (id)compressed_data;
- (id)compressed_messages;
- (void)deleteAggregated_messages;
- (void)deleteCompressed_data;
- (void)deleteCompressed_messages;
- (void)deleteIs_compressed;
- (void)deleteMetadata;
- (void)deleteTrial_messages;
- (void)deleteUnaggregated_messages;
- (id)dictionaryRepresentation;
- (int)getAnyEventType;
- (bool)hasCompressed_data;
- (bool)hasCompressed_messages;
- (bool)hasIs_compressed;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)is_compressed;
- (id)jsonData;
- (id)metadata;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setAggregated_messages:(id)arg1;
- (void)setCompressed_data:(id)arg1;
- (void)setCompressed_messages:(id)arg1;
- (void)setHasCompressed_data:(bool)arg1;
- (void)setHasCompressed_messages:(bool)arg1;
- (void)setHasIs_compressed:(bool)arg1;
- (void)setHasMetadata:(bool)arg1;
- (void)setIs_compressed:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTrial_messages:(id)arg1;
- (void)setUnaggregated_messages:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)trial_messages;
- (id)trial_messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)trial_messagesCount;
- (id)unaggregated_messages;
- (id)unaggregated_messagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)unaggregated_messagesCount;
- (void)writeTo:(id)arg1;

@end

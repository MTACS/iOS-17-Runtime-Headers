
@interface SISchemaIngestEnvironment : SISchemaInstrumentationMessage {
    int  _buildVariant;
    struct { 
        unsigned int buildVariant : 1; 
    }  _has;
}

@property (nonatomic) int buildVariant;
@property (nonatomic) bool hasBuildVariant;
@property (nonatomic, readonly) NSData *jsonData;

- (int)buildVariant;
- (void)deleteBuildVariant;
- (id)dictionaryRepresentation;
- (bool)hasBuildVariant;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBuildVariant:(int)arg1;
- (void)setHasBuildVariant:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end


@interface PLUSSchemaPLUSMediaGroundTruthSummary : SISchemaInstrumentationMessage {
    int  _groundTruthCount;
    struct { 
        unsigned int source : 1; 
        unsigned int groundTruthCount : 1; 
        unsigned int mediaEntityCount : 1; 
    }  _has;
    int  _mediaEntityCount;
    int  _source;
}

@property (nonatomic) int groundTruthCount;
@property (nonatomic) bool hasGroundTruthCount;
@property (nonatomic) bool hasMediaEntityCount;
@property (nonatomic) bool hasSource;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int mediaEntityCount;
@property (nonatomic) int source;

- (void)deleteGroundTruthCount;
- (void)deleteMediaEntityCount;
- (void)deleteSource;
- (id)dictionaryRepresentation;
- (int)groundTruthCount;
- (bool)hasGroundTruthCount;
- (bool)hasMediaEntityCount;
- (bool)hasSource;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)mediaEntityCount;
- (bool)readFrom:(id)arg1;
- (void)setGroundTruthCount:(int)arg1;
- (void)setHasGroundTruthCount:(bool)arg1;
- (void)setHasMediaEntityCount:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setMediaEntityCount:(int)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

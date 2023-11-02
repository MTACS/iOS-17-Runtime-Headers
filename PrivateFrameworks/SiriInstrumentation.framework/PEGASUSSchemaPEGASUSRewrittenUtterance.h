
@interface PEGASUSSchemaPEGASUSRewrittenUtterance : SISchemaInstrumentationMessage {
    struct { 
        unsigned int rewriteType : 1; 
        unsigned int isUsed : 1; 
    }  _has;
    bool  _isUsed;
    int  _rewriteType;
}

@property (nonatomic) bool hasIsUsed;
@property (nonatomic) bool hasRewriteType;
@property (nonatomic) bool isUsed;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int rewriteType;

- (void)deleteIsUsed;
- (void)deleteRewriteType;
- (id)dictionaryRepresentation;
- (bool)hasIsUsed;
- (bool)hasRewriteType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUsed;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (int)rewriteType;
- (void)setHasIsUsed:(bool)arg1;
- (void)setHasRewriteType:(bool)arg1;
- (void)setIsUsed:(bool)arg1;
- (void)setRewriteType:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

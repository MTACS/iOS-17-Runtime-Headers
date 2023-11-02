
@interface FLOWLINKSchemaFLOWLinkActionCancelled : SISchemaInstrumentationMessage {
    int  _cancellationInitiator;
    struct { 
        unsigned int cancellationInitiator : 1; 
    }  _has;
}

@property (nonatomic) int cancellationInitiator;
@property (nonatomic) bool hasCancellationInitiator;
@property (nonatomic, readonly) NSData *jsonData;

- (int)cancellationInitiator;
- (void)deleteCancellationInitiator;
- (id)dictionaryRepresentation;
- (bool)hasCancellationInitiator;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setCancellationInitiator:(int)arg1;
- (void)setHasCancellationInitiator:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

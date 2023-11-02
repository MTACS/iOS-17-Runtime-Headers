
@interface POMMESSchemaPOMMESProfileSliceResolutionRequestStarted : SISchemaInstrumentationMessage {
    struct { 
        unsigned int sliceLabel : 1; 
    }  _has;
    unsigned int  _sliceLabel;
}

@property (nonatomic) bool hasSliceLabel;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int sliceLabel;

- (void)deleteSliceLabel;
- (id)dictionaryRepresentation;
- (bool)hasSliceLabel;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSliceLabel:(bool)arg1;
- (void)setSliceLabel:(unsigned int)arg1;
- (unsigned int)sliceLabel;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

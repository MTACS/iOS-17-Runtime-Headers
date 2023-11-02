
@interface SISchemaUEISiriWasUnavailable : SISchemaInstrumentationMessage {
    struct { 
        unsigned int product : 1; 
        unsigned int reason : 1; 
    }  _has;
    int  _product;
    int  _reason;
}

@property (nonatomic) bool hasProduct;
@property (nonatomic) bool hasReason;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int product;
@property (nonatomic) int reason;

- (void)deleteProduct;
- (void)deleteReason;
- (id)dictionaryRepresentation;
- (bool)hasProduct;
- (bool)hasReason;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)product;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setHasProduct:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setProduct:(int)arg1;
- (void)setReason:(int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

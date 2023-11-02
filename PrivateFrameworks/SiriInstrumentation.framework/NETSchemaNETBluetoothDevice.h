
@interface NETSchemaNETBluetoothDevice : SISchemaInstrumentationMessage {
    struct { 
        unsigned int index : 1; 
        unsigned int rssi : 1; 
    }  _has;
    unsigned int  _index;
    double  _rssi;
}

@property (nonatomic) bool hasIndex;
@property (nonatomic) bool hasRssi;
@property (nonatomic) unsigned int index;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double rssi;

- (void)deleteIndex;
- (void)deleteRssi;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (bool)hasRssi;
- (unsigned long long)hash;
- (unsigned int)index;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (double)rssi;
- (void)setHasIndex:(bool)arg1;
- (void)setHasRssi:(bool)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setRssi:(double)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

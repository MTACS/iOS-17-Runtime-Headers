
@interface PETAggregationKey : PBCodable <NSCopying> {
    double  _bucket;
    unsigned int  _datestamp;
    struct { 
        unsigned int bucket : 1; 
        unsigned int datestamp : 1; 
        unsigned int type : 1; 
    }  _has;
    PETRawMessage * _rawMessage;
    int  _type;
}

@property (nonatomic) double bucket;
@property (nonatomic) unsigned int datestamp;
@property (nonatomic) bool hasBucket;
@property (nonatomic) bool hasDatestamp;
@property (nonatomic, readonly) bool hasRawMessage;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) PETRawMessage *rawMessage;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (double)bucket;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)datestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucket;
- (bool)hasDatestamp;
- (bool)hasRawMessage;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)rawMessage;
- (bool)readFrom:(id)arg1;
- (void)setBucket:(double)arg1;
- (void)setDatestamp:(unsigned int)arg1;
- (void)setHasBucket:(bool)arg1;
- (void)setHasDatestamp:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setRawMessage:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

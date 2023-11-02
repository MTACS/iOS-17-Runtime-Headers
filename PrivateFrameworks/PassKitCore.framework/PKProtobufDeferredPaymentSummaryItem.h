
@interface PKProtobufDeferredPaymentSummaryItem : PBCodable <NSCopying> {
    double  _deferredDate;
    struct { 
        unsigned int deferredDate : 1; 
    }  _has;
}

@property (nonatomic) double deferredDate;
@property (nonatomic) bool hasDeferredDate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)deferredDate;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeferredDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeferredDate:(double)arg1;
- (void)setHasDeferredDate:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

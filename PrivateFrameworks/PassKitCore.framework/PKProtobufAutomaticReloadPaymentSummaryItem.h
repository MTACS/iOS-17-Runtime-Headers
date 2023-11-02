
@interface PKProtobufAutomaticReloadPaymentSummaryItem : PBCodable <NSCopying> {
    PKProtobufCustomPrecisionAmount * _thresholdAmount;
}

@property (nonatomic, readonly) bool hasThresholdAmount;
@property (nonatomic, retain) PKProtobufCustomPrecisionAmount *thresholdAmount;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasThresholdAmount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setThresholdAmount:(id)arg1;
- (id)thresholdAmount;
- (void)writeTo:(id)arg1;

@end

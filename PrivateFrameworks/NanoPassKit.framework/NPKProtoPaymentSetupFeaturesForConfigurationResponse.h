
@interface NPKProtoPaymentSetupFeaturesForConfigurationResponse : PBCodable <NSCopying> {
    NSMutableArray * _paymentSetupFeatureDatas;
}

@property (nonatomic, retain) NSMutableArray *paymentSetupFeatureDatas;

+ (Class)paymentSetupFeatureDataType;

- (void).cxx_destruct;
- (void)addPaymentSetupFeatureData:(id)arg1;
- (void)clearPaymentSetupFeatureDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentSetupFeatureDataAtIndex:(unsigned long long)arg1;
- (id)paymentSetupFeatureDatas;
- (unsigned long long)paymentSetupFeatureDatasCount;
- (bool)readFrom:(id)arg1;
- (void)setPaymentSetupFeatureDatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end

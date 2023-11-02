
@interface PKProtobufPaymentSummaryItem : PBCodable <NSCopying> {
    long long  _amount;
    PKProtobufAutomaticReloadPaymentSummaryItem * _automaticReloadPaymentSummaryItem;
    PKProtobufCustomPrecisionAmount * _customPrecisionAmount;
    PKProtobufDeferredPaymentSummaryItem * _deferredPaymentSummaryItem;
    struct { 
        unsigned int amount : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _label;
    PKProtobufRecurringPaymentSummaryItem * _recurringPaymentSummaryItem;
    PKProtobufShippingMethod * _shippingMethodSummaryItem;
    unsigned int  _type;
}

@property (nonatomic) long long amount;
@property (nonatomic, retain) PKProtobufAutomaticReloadPaymentSummaryItem *automaticReloadPaymentSummaryItem;
@property (nonatomic, retain) PKProtobufCustomPrecisionAmount *customPrecisionAmount;
@property (nonatomic, retain) PKProtobufDeferredPaymentSummaryItem *deferredPaymentSummaryItem;
@property (nonatomic) bool hasAmount;
@property (nonatomic, readonly) bool hasAutomaticReloadPaymentSummaryItem;
@property (nonatomic, readonly) bool hasCustomPrecisionAmount;
@property (nonatomic, readonly) bool hasDeferredPaymentSummaryItem;
@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic, readonly) bool hasRecurringPaymentSummaryItem;
@property (nonatomic, readonly) bool hasShippingMethodSummaryItem;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) PKProtobufRecurringPaymentSummaryItem *recurringPaymentSummaryItem;
@property (nonatomic, retain) PKProtobufShippingMethod *shippingMethodSummaryItem;
@property (nonatomic) unsigned int type;

- (void).cxx_destruct;
- (long long)amount;
- (id)automaticReloadPaymentSummaryItem;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customPrecisionAmount;
- (id)deferredPaymentSummaryItem;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmount;
- (bool)hasAutomaticReloadPaymentSummaryItem;
- (bool)hasCustomPrecisionAmount;
- (bool)hasDeferredPaymentSummaryItem;
- (bool)hasLabel;
- (bool)hasRecurringPaymentSummaryItem;
- (bool)hasShippingMethodSummaryItem;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recurringPaymentSummaryItem;
- (void)setAmount:(long long)arg1;
- (void)setAutomaticReloadPaymentSummaryItem:(id)arg1;
- (void)setCustomPrecisionAmount:(id)arg1;
- (void)setDeferredPaymentSummaryItem:(id)arg1;
- (void)setHasAmount:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setRecurringPaymentSummaryItem:(id)arg1;
- (void)setShippingMethodSummaryItem:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (id)shippingMethodSummaryItem;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end


@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext : PBCodable <NSCopying> {
    NPKProtoStandalonePaymentSetupProduct * _product;
    NSMutableArray * _setupFields;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) bool hasProduct;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NPKProtoStandalonePaymentSetupProduct *product;
@property (nonatomic, retain) NSMutableArray *setupFields;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;

+ (Class)setupFieldsType;

- (void).cxx_destruct;
- (void)addSetupFields:(id)arg1;
- (void)clearSetupFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProduct;
- (bool)hasSubtitle;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)product;
- (bool)readFrom:(id)arg1;
- (void)setProduct:(id)arg1;
- (void)setSetupFields:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)setupFields;
- (id)setupFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)setupFieldsCount;
- (id)subtitle;
- (id)title;
- (void)writeTo:(id)arg1;

@end

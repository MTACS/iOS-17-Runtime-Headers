
@interface TTSSchemaTTSAudioInterface : SISchemaInstrumentationMessage {
    bool  _hasProductId;
    bool  _hasVendorId;
    NSString * _productId;
    NSString * _vendorId;
}

@property (nonatomic) bool hasProductId;
@property (nonatomic) bool hasVendorId;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *productId;
@property (nonatomic, copy) NSString *vendorId;

- (void).cxx_destruct;
- (void)deleteProductId;
- (void)deleteVendorId;
- (id)dictionaryRepresentation;
- (bool)hasProductId;
- (bool)hasVendorId;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)productId;
- (bool)readFrom:(id)arg1;
- (void)setHasProductId:(bool)arg1;
- (void)setHasVendorId:(bool)arg1;
- (void)setProductId:(id)arg1;
- (void)setVendorId:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)vendorId;
- (void)writeTo:(id)arg1;

@end

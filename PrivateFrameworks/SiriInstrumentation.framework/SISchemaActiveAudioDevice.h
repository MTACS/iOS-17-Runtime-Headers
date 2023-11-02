
@interface SISchemaActiveAudioDevice : SISchemaInstrumentationMessage {
    bool  _hasProductIdentifier;
    bool  _hasVendorIdentifier;
    NSString * _productIdentifier;
    NSString * _vendorIdentifier;
}

@property (nonatomic) bool hasProductIdentifier;
@property (nonatomic) bool hasVendorIdentifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSString *vendorIdentifier;

- (void).cxx_destruct;
- (void)deleteProductIdentifier;
- (void)deleteVendorIdentifier;
- (id)dictionaryRepresentation;
- (bool)hasProductIdentifier;
- (bool)hasVendorIdentifier;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)productIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setHasProductIdentifier:(bool)arg1;
- (void)setHasVendorIdentifier:(bool)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setVendorIdentifier:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)vendorIdentifier;
- (void)writeTo:(id)arg1;

@end

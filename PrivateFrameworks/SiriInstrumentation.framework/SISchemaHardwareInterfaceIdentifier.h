
@interface SISchemaHardwareInterfaceIdentifier : SISchemaInstrumentationMessage {
    bool  _hasInterfaceProductID;
    bool  _hasInterfaceVendorID;
    NSString * _interfaceProductID;
    NSString * _interfaceVendorID;
}

@property (nonatomic) bool hasInterfaceProductID;
@property (nonatomic) bool hasInterfaceVendorID;
@property (nonatomic, copy) NSString *interfaceProductID;
@property (nonatomic, copy) NSString *interfaceVendorID;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (void)deleteInterfaceProductID;
- (void)deleteInterfaceVendorID;
- (id)dictionaryRepresentation;
- (bool)hasInterfaceProductID;
- (bool)hasInterfaceVendorID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)interfaceProductID;
- (id)interfaceVendorID;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasInterfaceProductID:(bool)arg1;
- (void)setHasInterfaceVendorID:(bool)arg1;
- (void)setInterfaceProductID:(id)arg1;
- (void)setInterfaceVendorID:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

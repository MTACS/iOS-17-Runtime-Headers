
@interface CDASchemaCDAParticipant : SISchemaInstrumentationMessage {
    int  _deviceClass;
    unsigned int  _goodnessScore;
    struct { 
        unsigned int goodnessScore : 1; 
        unsigned int deviceClass : 1; 
        unsigned int productType : 1; 
    }  _has;
    unsigned int  _productType;
}

@property (nonatomic) int deviceClass;
@property (nonatomic) unsigned int goodnessScore;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic) bool hasGoodnessScore;
@property (nonatomic) bool hasProductType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int productType;

- (void)deleteDeviceClass;
- (void)deleteGoodnessScore;
- (void)deleteProductType;
- (int)deviceClass;
- (id)dictionaryRepresentation;
- (unsigned int)goodnessScore;
- (bool)hasDeviceClass;
- (bool)hasGoodnessScore;
- (bool)hasProductType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)productType;
- (bool)readFrom:(id)arg1;
- (void)setDeviceClass:(int)arg1;
- (void)setGoodnessScore:(unsigned int)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasGoodnessScore:(bool)arg1;
- (void)setHasProductType:(bool)arg1;
- (void)setProductType:(unsigned int)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end

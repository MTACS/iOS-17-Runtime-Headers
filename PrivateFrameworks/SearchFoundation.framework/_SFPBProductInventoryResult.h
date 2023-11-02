
@interface _SFPBProductInventoryResult : PBCodable <NSSecureCoding, _SFPBProductInventoryResult> {
    NSArray * _availabilitys;
    NSString * _productIdentifier;
}

@property (nonatomic, copy) NSArray *availabilitys;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *productIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addAvailability:(id)arg1;
- (id)availabilityAtIndex:(unsigned long long)arg1;
- (unsigned long long)availabilityCount;
- (id)availabilitys;
- (void)clearAvailability;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)productIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAvailability:(id)arg1;
- (void)setAvailabilitys:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

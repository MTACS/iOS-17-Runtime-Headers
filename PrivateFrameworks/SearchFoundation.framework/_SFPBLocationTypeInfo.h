
@interface _SFPBLocationTypeInfo : PBCodable <NSSecureCoding, _SFPBLocationTypeInfo> {
    NSString * _address;
}

@property (nonatomic, copy) NSString *address;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)address;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)writeTo:(id)arg1;

@end

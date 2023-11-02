
@interface _SFPBResultEntity : PBCodable <NSSecureCoding, _SFPBResultEntity> {
    _SFPBLocationTypeInfo * _location_type_info;
    NSString * _maps_encrypted_muid;
    NSString * _name;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBLocationTypeInfo *location_type_info;
@property (nonatomic, copy) NSString *maps_encrypted_muid;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location_type_info;
- (id)maps_encrypted_muid;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setLocation_type_info:(id)arg1;
- (void)setMaps_encrypted_muid:(id)arg1;
- (void)setName:(id)arg1;
- (void)writeTo:(id)arg1;

@end

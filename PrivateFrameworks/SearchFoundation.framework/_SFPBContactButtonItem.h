
@interface _SFPBContactButtonItem : PBCodable <NSSecureCoding, _SFPBContactButtonItem> {
    NSString * _contactIdentifier;
    _SFPBPerson * _person;
    unsigned long long  _uniqueId;
}

@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBPerson *person;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long uniqueId;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)person;
- (bool)readFrom:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (unsigned long long)uniqueId;
- (void)writeTo:(id)arg1;

@end

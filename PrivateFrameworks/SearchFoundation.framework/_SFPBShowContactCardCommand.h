
@interface _SFPBShowContactCardCommand : PBCodable <NSSecureCoding, _SFPBShowContactCardCommand> {
    NSString * _contactIdentifier;
    bool  _isSuggestedContact;
}

@property (nonatomic, copy) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSuggestedContact;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSuggestedContact;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setIsSuggestedContact:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

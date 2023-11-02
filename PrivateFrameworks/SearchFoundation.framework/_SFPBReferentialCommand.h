
@interface _SFPBReferentialCommand : PBCodable <NSSecureCoding, _SFPBReferentialCommand> {
    NSString * _referenceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (id)referenceIdentifier;
- (void)setReferenceIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

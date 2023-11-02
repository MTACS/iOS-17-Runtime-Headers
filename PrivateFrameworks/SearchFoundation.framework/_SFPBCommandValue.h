
@interface _SFPBCommandValue : PBCodable <NSSecureCoding, _SFPBCommandValue> {
    _SFPBReferentialCommand * _referentialCommand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBReferentialCommand *referentialCommand;
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
- (id)referentialCommand;
- (void)setReferentialCommand:(id)arg1;
- (void)writeTo:(id)arg1;

@end

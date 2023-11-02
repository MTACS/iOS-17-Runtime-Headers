
@interface _SFPBURLImage : PBCodable <NSSecureCoding, _SFPBURLImage> {
    _SFPBURL * _darkUrlValue;
    _SFPBURL * _urlValue;
}

@property (nonatomic, retain) _SFPBURL *darkUrlValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBURL *urlValue;

- (void).cxx_destruct;
- (id)darkUrlValue;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setDarkUrlValue:(id)arg1;
- (void)setUrlValue:(id)arg1;
- (id)urlValue;
- (void)writeTo:(id)arg1;

@end


@interface _SFPBViewEmailCommand : PBCodable <NSSecureCoding, _SFPBViewEmailCommand> {
    bool  _placeHolderProperty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool placeHolderProperty;
@property (readonly) Class superclass;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)placeHolderProperty;
- (bool)readFrom:(id)arg1;
- (void)setPlaceHolderProperty:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

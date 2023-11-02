
@interface _SFPBRFLongItemStandardCardSection : PBCodable <NSSecureCoding, _SFPBRFLongItemStandardCardSection> {
    bool  _has_background_platter;
    bool  _is_quote;
    _SFPBRFTextProperty * _text_1;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool has_background_platter;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool is_quote;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFTextProperty *text_1;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (bool)has_background_platter;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)is_quote;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHas_background_platter:(bool)arg1;
- (void)setIs_quote:(bool)arg1;
- (void)setText_1:(id)arg1;
- (id)text_1;
- (void)writeTo:(id)arg1;

@end

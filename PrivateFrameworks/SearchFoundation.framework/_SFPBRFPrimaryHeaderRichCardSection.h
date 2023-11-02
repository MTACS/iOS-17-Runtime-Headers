
@interface _SFPBRFPrimaryHeaderRichCardSection : PBCodable <NSSecureCoding, _SFPBRFPrimaryHeaderRichCardSection> {
    _SFPBRFTextProperty * _text_1;
    _SFPBRFTextProperty * _text_2;
    _SFPBRFTextProperty * _text_3;
    _SFPBRFTextProperty * _text_4;
    _SFPBRFVisualProperty * _thumbnail;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFTextProperty *text_1;
@property (nonatomic, retain) _SFPBRFTextProperty *text_2;
@property (nonatomic, retain) _SFPBRFTextProperty *text_3;
@property (nonatomic, retain) _SFPBRFTextProperty *text_4;
@property (nonatomic, retain) _SFPBRFVisualProperty *thumbnail;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setText_1:(id)arg1;
- (void)setText_2:(id)arg1;
- (void)setText_3:(id)arg1;
- (void)setText_4:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)text_1;
- (id)text_2;
- (id)text_3;
- (id)text_4;
- (id)thumbnail;
- (void)writeTo:(id)arg1;

@end

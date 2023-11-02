
@interface _SFPBRFFactItemStandardCardSection : PBCodable <NSSecureCoding, _SFPBRFFactItemStandardCardSection> {
    _SFPBRFTextProperty * _text_1;
    _SFPBRFTextProperty * _text_2;
    _SFPBRFTextProperty * _text_3;
    NSArray * _text_4s;
    NSArray * _text_5s;
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
@property (nonatomic, copy) NSArray *text_4s;
@property (nonatomic, copy) NSArray *text_5s;
@property (nonatomic, retain) _SFPBRFVisualProperty *thumbnail;

- (void).cxx_destruct;
- (void)addText_4:(id)arg1;
- (void)addText_5:(id)arg1;
- (void)clearText_4;
- (void)clearText_5;
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
- (void)setText_4s:(id)arg1;
- (void)setText_5:(id)arg1;
- (void)setText_5s:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)text_1;
- (id)text_2;
- (id)text_3;
- (id)text_4AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_4Count;
- (id)text_4s;
- (id)text_5AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_5Count;
- (id)text_5s;
- (id)thumbnail;
- (void)writeTo:(id)arg1;

@end

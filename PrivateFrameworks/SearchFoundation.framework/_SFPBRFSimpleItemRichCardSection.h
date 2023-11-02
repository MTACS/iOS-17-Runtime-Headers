
@interface _SFPBRFSimpleItemRichCardSection : PBCodable <NSSecureCoding, _SFPBRFSimpleItemRichCardSection> {
    _SFPBRFTextProperty * _text_1;
    _SFPBRFTextProperty * _text_2;
    NSArray * _text_3s;
    _SFPBRFTextProperty * _text_4;
    NSArray * _text_5s;
    _SFPBRFTextProperty * _text_6;
    _SFPBRFTextProperty * _text_7;
    _SFPBRFTextProperty * _text_8;
    _SFPBRFVisualProperty * _thumbnail;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFTextProperty *text_1;
@property (nonatomic, retain) _SFPBRFTextProperty *text_2;
@property (nonatomic, copy) NSArray *text_3s;
@property (nonatomic, retain) _SFPBRFTextProperty *text_4;
@property (nonatomic, copy) NSArray *text_5s;
@property (nonatomic, retain) _SFPBRFTextProperty *text_6;
@property (nonatomic, retain) _SFPBRFTextProperty *text_7;
@property (nonatomic, retain) _SFPBRFTextProperty *text_8;
@property (nonatomic, retain) _SFPBRFVisualProperty *thumbnail;

- (void).cxx_destruct;
- (void)addText_3:(id)arg1;
- (void)addText_5:(id)arg1;
- (void)clearText_3;
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
- (void)setText_3s:(id)arg1;
- (void)setText_4:(id)arg1;
- (void)setText_5:(id)arg1;
- (void)setText_5s:(id)arg1;
- (void)setText_6:(id)arg1;
- (void)setText_7:(id)arg1;
- (void)setText_8:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)text_1;
- (id)text_2;
- (id)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (id)text_3s;
- (id)text_4;
- (id)text_5AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_5Count;
- (id)text_5s;
- (id)text_6;
- (id)text_7;
- (id)text_8;
- (id)thumbnail;
- (void)writeTo:(id)arg1;

@end

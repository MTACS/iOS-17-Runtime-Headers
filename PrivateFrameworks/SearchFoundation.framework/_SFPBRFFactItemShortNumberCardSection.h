
@interface _SFPBRFFactItemShortNumberCardSection : PBCodable <NSSecureCoding, _SFPBRFFactItemShortNumberCardSection> {
    _SFPBRFTextProperty * _number;
    _SFPBRFTextProperty * _text_1;
    NSArray * _text_2s;
    NSArray * _text_3s;
    _SFPBRFTextProperty * _text_4;
    _SFPBRFVisualProperty * _thumbnail;
    _SFPBRFTextProperty * _unit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBRFTextProperty *number;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFTextProperty *text_1;
@property (nonatomic, copy) NSArray *text_2s;
@property (nonatomic, copy) NSArray *text_3s;
@property (nonatomic, retain) _SFPBRFTextProperty *text_4;
@property (nonatomic, retain) _SFPBRFVisualProperty *thumbnail;
@property (nonatomic, retain) _SFPBRFTextProperty *unit;

- (void).cxx_destruct;
- (void)addText_2:(id)arg1;
- (void)addText_3:(id)arg1;
- (void)clearText_2;
- (void)clearText_3;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)number;
- (bool)readFrom:(id)arg1;
- (void)setNumber:(id)arg1;
- (void)setText_1:(id)arg1;
- (void)setText_2:(id)arg1;
- (void)setText_2s:(id)arg1;
- (void)setText_3:(id)arg1;
- (void)setText_3s:(id)arg1;
- (void)setText_4:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)text_1;
- (id)text_2AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_2Count;
- (id)text_2s;
- (id)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (id)text_3s;
- (id)text_4;
- (id)thumbnail;
- (id)unit;
- (void)writeTo:(id)arg1;

@end

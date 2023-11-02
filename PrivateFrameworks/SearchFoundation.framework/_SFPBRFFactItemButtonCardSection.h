
@interface _SFPBRFFactItemButtonCardSection : PBCodable <NSSecureCoding, _SFPBRFFactItemButtonCardSection> {
    _SFPBButtonItem * _button_1;
    _SFPBButtonItem * _button_2;
    _SFPBButtonItem * _button_3;
    _SFPBRFTextProperty * _text_1;
    _SFPBRFTextProperty * _text_2;
    _SFPBRFTextProperty * _text_3;
    NSArray * _text_4s;
    _SFPBRFTextProperty * _text_5;
    _SFPBRFVisualProperty * _thumbnail;
}

@property (nonatomic, retain) _SFPBButtonItem *button_1;
@property (nonatomic, retain) _SFPBButtonItem *button_2;
@property (nonatomic, retain) _SFPBButtonItem *button_3;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFTextProperty *text_1;
@property (nonatomic, retain) _SFPBRFTextProperty *text_2;
@property (nonatomic, retain) _SFPBRFTextProperty *text_3;
@property (nonatomic, copy) NSArray *text_4s;
@property (nonatomic, retain) _SFPBRFTextProperty *text_5;
@property (nonatomic, retain) _SFPBRFVisualProperty *thumbnail;

- (void).cxx_destruct;
- (void)addText_4:(id)arg1;
- (id)button_1;
- (id)button_2;
- (id)button_3;
- (void)clearText_4;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setButton_1:(id)arg1;
- (void)setButton_2:(id)arg1;
- (void)setButton_3:(id)arg1;
- (void)setText_1:(id)arg1;
- (void)setText_2:(id)arg1;
- (void)setText_3:(id)arg1;
- (void)setText_4:(id)arg1;
- (void)setText_4s:(id)arg1;
- (void)setText_5:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)text_1;
- (id)text_2;
- (id)text_3;
- (id)text_4AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_4Count;
- (id)text_4s;
- (id)text_5;
- (id)thumbnail;
- (void)writeTo:(id)arg1;

@end

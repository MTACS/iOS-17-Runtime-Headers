
@interface _SFPBRFSimpleItemStandardCardSection : PBCodable <NSSecureCoding, _SFPBRFSimpleItemStandardCardSection> {
    _SFPBRFTextProperty * _text_1;
    _SFPBRFTextProperty * _text_2;
    NSArray * _text_3s;
    NSArray * _text_4s;
    _SFPBRFTextProperty * _text_5;
    _SFPBRFTextProperty * _text_6;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRFTextProperty *text_1;
@property (nonatomic, retain) _SFPBRFTextProperty *text_2;
@property (nonatomic, copy) NSArray *text_3s;
@property (nonatomic, copy) NSArray *text_4s;
@property (nonatomic, retain) _SFPBRFTextProperty *text_5;
@property (nonatomic, retain) _SFPBRFTextProperty *text_6;

- (void).cxx_destruct;
- (void)addText_3:(id)arg1;
- (void)addText_4:(id)arg1;
- (void)clearText_3;
- (void)clearText_4;
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
- (void)setText_4s:(id)arg1;
- (void)setText_5:(id)arg1;
- (void)setText_6:(id)arg1;
- (id)text_1;
- (id)text_2;
- (id)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (id)text_3s;
- (id)text_4AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_4Count;
- (id)text_4s;
- (id)text_5;
- (id)text_6;
- (void)writeTo:(id)arg1;

@end

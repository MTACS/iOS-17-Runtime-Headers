
@interface _SFPBRFSummaryItemAlignedTextCardSection : PBCodable <NSSecureCoding, _SFPBRFSummaryItemAlignedTextCardSection> {
    _SFPBRFTextProperty * _text_1;
    _SFPBRFTextProperty * _text_2;
    NSArray * _text_3s;
    _SFPBRFTextProperty * _text_4;
    _SFPBRFTextProperty * _text_5;
    NSArray * _text_6s;
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
@property (nonatomic, retain) _SFPBRFTextProperty *text_5;
@property (nonatomic, copy) NSArray *text_6s;
@property (nonatomic, retain) _SFPBRFVisualProperty *thumbnail;

- (void).cxx_destruct;
- (void)addText_3:(id)arg1;
- (void)addText_6:(id)arg1;
- (void)clearText_3;
- (void)clearText_6;
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
- (void)setText_6:(id)arg1;
- (void)setText_6s:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (id)text_1;
- (id)text_2;
- (id)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (id)text_3s;
- (id)text_4;
- (id)text_5;
- (id)text_6AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_6Count;
- (id)text_6s;
- (id)thumbnail;
- (void)writeTo:(id)arg1;

@end

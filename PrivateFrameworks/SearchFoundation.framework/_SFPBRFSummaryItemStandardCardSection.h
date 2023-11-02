
@interface _SFPBRFSummaryItemStandardCardSection : PBCodable <NSSecureCoding, _SFPBRFSummaryItemStandardCardSection> {
    bool  _suppress_text_2_if_text_1_exceeds_a_single_line;
    _SFPBRFTextProperty * _text_1;
    NSArray * _text_2s;
    NSArray * _text_3s;
    _SFPBRFTextProperty * _text_4;
    _SFPBRFVisualProperty * _thumbnail;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) bool suppress_text_2_if_text_1_exceeds_a_single_line;
@property (nonatomic, retain) _SFPBRFTextProperty *text_1;
@property (nonatomic, copy) NSArray *text_2s;
@property (nonatomic, copy) NSArray *text_3s;
@property (nonatomic, retain) _SFPBRFTextProperty *text_4;
@property (nonatomic, retain) _SFPBRFVisualProperty *thumbnail;

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
- (bool)readFrom:(id)arg1;
- (void)setSuppress_text_2_if_text_1_exceeds_a_single_line:(bool)arg1;
- (void)setText_1:(id)arg1;
- (void)setText_2:(id)arg1;
- (void)setText_2s:(id)arg1;
- (void)setText_3:(id)arg1;
- (void)setText_3s:(id)arg1;
- (void)setText_4:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (bool)suppress_text_2_if_text_1_exceeds_a_single_line;
- (id)text_1;
- (id)text_2AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_2Count;
- (id)text_2s;
- (id)text_3AtIndex:(unsigned long long)arg1;
- (unsigned long long)text_3Count;
- (id)text_3s;
- (id)text_4;
- (id)thumbnail;
- (void)writeTo:(id)arg1;

@end

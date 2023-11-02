
@interface _SFPBRFExpandingComponentContent : PBCodable <NSSecureCoding, _SFPBRFExpandingComponentContent> {
    _SFPBRFLongItemStandardCardSection * _long_item_standard_card_section;
    _SFPBRFReferenceFootnoteCardSection * _reference_footnote_card_section;
    unsigned long long  _whichValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBRFLongItemStandardCardSection *long_item_standard_card_section;
@property (nonatomic, retain) _SFPBRFReferenceFootnoteCardSection *reference_footnote_card_section;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long whichValue;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)long_item_standard_card_section;
- (bool)readFrom:(id)arg1;
- (id)reference_footnote_card_section;
- (void)setLong_item_standard_card_section:(id)arg1;
- (void)setReference_footnote_card_section:(id)arg1;
- (unsigned long long)whichValue;
- (void)writeTo:(id)arg1;

@end

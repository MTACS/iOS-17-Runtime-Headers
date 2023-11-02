
@interface _SFPBRFExpandableStandardCardSection : PBCodable <NSSecureCoding, _SFPBRFExpandableStandardCardSection> {
    NSArray * _expanding_component_contents;
    _SFPBRFSummaryItemStandardCardSection * _summary_item_standard_card_section;
    unsigned long long  _whichPrimary_Component;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *expanding_component_contents;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBRFSummaryItemStandardCardSection *summary_item_standard_card_section;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long whichPrimary_Component;

- (void).cxx_destruct;
- (void)addExpanding_component_content:(id)arg1;
- (void)clearExpanding_component_content;
- (id)dictionaryRepresentation;
- (id)expanding_component_contentAtIndex:(unsigned long long)arg1;
- (unsigned long long)expanding_component_contentCount;
- (id)expanding_component_contents;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setExpanding_component_content:(id)arg1;
- (void)setExpanding_component_contents:(id)arg1;
- (void)setSummary_item_standard_card_section:(id)arg1;
- (id)summary_item_standard_card_section;
- (unsigned long long)whichPrimary_Component;
- (void)writeTo:(id)arg1;

@end


@interface RFExpandingComponentContent : NSObject <NSCopying, NSSecureCoding, RFExpandingComponentContent> {
    struct { 
        unsigned int long_item_standard_card_section : 1; 
        unsigned int reference_footnote_card_section : 1; 
    }  _has;
    RFLongItemStandardCardSection * _long_item_standard_card_section;
    RFReferenceFootnoteCardSection * _reference_footnote_card_section;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) RFLongItemStandardCardSection *long_item_standard_card_section;
@property (nonatomic, retain) RFReferenceFootnoteCardSection *reference_footnote_card_section;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasLong_item_standard_card_section;
- (bool)hasReference_footnote_card_section;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)long_item_standard_card_section;
- (id)reference_footnote_card_section;
- (void)setLong_item_standard_card_section:(id)arg1;
- (void)setReference_footnote_card_section:(id)arg1;

@end

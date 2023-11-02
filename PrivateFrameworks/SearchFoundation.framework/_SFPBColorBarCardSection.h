
@interface _SFPBColorBarCardSection : PBCodable <NSSecureCoding, _SFPBColorBarCardSection> {
    _SFPBColor * _barColor;
    _SFPBRichText * _subtitle;
    _SFPBRichText * _title;
    _SFPBRichText * _topText;
}

@property (nonatomic, retain) _SFPBColor *barColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBRichText *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRichText *title;
@property (nonatomic, retain) _SFPBRichText *topText;

- (void).cxx_destruct;
- (id)barColor;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setBarColor:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopText:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)topText;
- (void)writeTo:(id)arg1;

@end

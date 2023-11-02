
@interface _SFPBAttributionFooterCardSection : PBCodable <NSSecureCoding, _SFPBAttributionFooterCardSection> {
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    _SFPBRichText * _leadingAttribution;
    _SFPBPunchout * _leadingAttributionPunchout;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    _SFPBRichText * _trailingAttribution;
    _SFPBPunchout * _trailingAttributionPunchout;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBRichText *leadingAttribution;
@property (nonatomic, retain) _SFPBPunchout *leadingAttributionPunchout;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRichText *trailingAttribution;
@property (nonatomic, retain) _SFPBPunchout *trailingAttributionPunchout;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (id)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)leadingAttribution;
- (id)leadingAttributionPunchout;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setLeadingAttribution:(id)arg1;
- (void)setLeadingAttributionPunchout:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrailingAttribution:(id)arg1;
- (void)setTrailingAttributionPunchout:(id)arg1;
- (void)setType:(id)arg1;
- (id)trailingAttribution;
- (id)trailingAttributionPunchout;
- (id)type;
- (void)writeTo:(id)arg1;

@end

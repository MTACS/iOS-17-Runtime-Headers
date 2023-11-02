
@interface _SFPBButtonListCardSection : PBCodable <NSSecureCoding, _SFPBButtonListCardSection> {
    NSString * _SectionTitle;
    _SFPBColor * _backgroundColor;
    NSArray * _buttons;
    bool  _canBeHidden;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _showMoreButtonTitle;
    NSString * _type;
}

@property (nonatomic, copy) NSString *SectionTitle;
@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (nonatomic, copy) NSString *showMoreButtonTitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)SectionTitle;
- (void)addButtons:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (id)buttons;
- (id)buttonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonsCount;
- (bool)canBeHidden;
- (void)clearButtons;
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
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSectionTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setShowMoreButtonTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)showMoreButtonTitle;
- (id)type;
- (void)writeTo:(id)arg1;

@end

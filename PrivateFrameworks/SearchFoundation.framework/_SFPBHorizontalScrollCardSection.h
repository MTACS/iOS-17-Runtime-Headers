
@interface _SFPBHorizontalScrollCardSection : PBCodable <NSSecureCoding, _SFPBHorizontalScrollCardSection> {
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    NSArray * _cardSections;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    unsigned long long  _numberOfRows;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (nonatomic, copy) NSArray *cardSections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addCardSections:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (id)cardSections;
- (id)cardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cardSectionsCount;
- (void)clearCardSections;
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
- (unsigned long long)numberOfRows;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setCardSections:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
